#include <Wire.h>
#include <RTClib.h>
#include <Servo.h>
#include <KiwisIoT.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

#define SERVO_PIN D5

RTC_DS3231 rtc;
Servo feeder;

KiwisIoT kiwisiot(ssid, pass, topic);

int lastFeedDay = -1;
int lastFeedHour = -1;

void feedFish() {

  Serial.println("Fish Feeding Started");

  feeder.write(90);
  delay(1000);

  feeder.write(0);
  delay(500);

  Serial.println("Fish Feeding Completed");

  kiwisiot.send("0", "1");
}

void setup() {

  Serial.begin(115200);

  Wire.begin(D2, D1);

  feeder.attach(SERVO_PIN);
  feeder.write(0);

  if (!rtc.begin()) {
    Serial.println("RTC Not Found!");
    while (true) {
      delay(1000);
    }
  }

  // Set RTC time once if the clock is not set:
  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

  kiwisiot.begin();

  Serial.println("Fish Feeding Automation Started");
}

void loop() {

  kiwisiot.run();

  DateTime now = rtc.now();

  int currentHour = now.hour();
  int currentMinute = now.minute();
  int currentDay = now.day();

  if ((currentHour == 8 || currentHour == 18) &&
      currentMinute == 0 &&
      (lastFeedDay != currentDay ||
       lastFeedHour != currentHour)) {

    feedFish();

    lastFeedDay = currentDay;
    lastFeedHour = currentHour;
  }

  delay(1000);
}