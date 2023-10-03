#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <Wire.h>
#include "Servo.h"
#include "SPI.h"

#include "Adafruit_NeoPixel.h"
#include "TFT_eSPI.h" //for matrix led
TFT_eSPI tft = TFT_eSPI();

typedef int Number;
typedef int Boolean;
using namespace std;
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
#define _EN_A  27
#define _EN_B  26
#define _EN_C  16
#define _EN_D  17
#define _MotorA_ch  6
#define _MotorB_ch  7
#define _MotorC_ch  1
#define _MotorD_ch  0
int m1 = 0;
int m2 = 0;
int m3 = 0;
int m4 = 0;
int speedm = 0;

#define PIN            13
#define NUMPIXELS      8
Adafruit_NeoPixel NeoPixel1 = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);




void setup()
{
Servo1.attach(19);
Servo2.attach(32);
Servo3.attach(33);
Servo4.attach(25);

ledcSetup(_MotorA_ch, 1000, 8);
ledcAttachPin(_EN_A, _MotorA_ch);
ledcSetup(_MotorB_ch, 1000, 8);
ledcAttachPin(_EN_B, _MotorB_ch);
ledcSetup(_MotorC_ch, 1000, 8);
ledcAttachPin(_EN_C, _MotorC_ch);
ledcSetup(_MotorD_ch, 1000, 8);
ledcAttachPin(_EN_D, _MotorD_ch);

NeoPixel1.begin();



  NeoPixel1.setBrightness(20);
  NeoPixel1.show();

  for (uint16_t i = 0; i < NeoPixel1.numPixels(); i++) {
    NeoPixel1.setPixelColor(i, NeoPixel1.Color(255, 255, 255));
    NeoPixel1.show();
    delay(25);
  }
}
void loop()
{


}