#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <Wire.h>
#include "Servo.h"
#include "SPI.h"


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
#define _MotorA_ch  1
#define _MotorB_ch  2
#define _MotorC_ch  3
#define _MotorD_ch  4
int m1 = 0;
int m2 = 0;
int m3 = 0;
int m4 = 0;
int speedm = 0;






void setup()
{
    
Servo1.attach(19);
Servo2.attach(32);
Servo3.attach(33);
Servo4.attach(25);

ledcAttachPin(27, 3);
ledcSetup(_MotorA_ch, 1000, 8);
ledcAttachPin(_EN_A, _MotorA_ch);
ledcSetup(_MotorB_ch, 1000, 8);
ledcAttachPin(_EN_B, _MotorB_ch);
ledcSetup(_MotorC_ch, 1000, 8);
ledcAttachPin(_EN_C, _MotorC_ch);
ledcSetup(_MotorD_ch, 1000, 8);
ledcAttachPin(_EN_D, _MotorD_ch);
pinMode(0,INPUT);

}
void loop()
{
    while(digitalRead(0) == 1){}
        m1 = 50;
        m1 = map(m1, 0, 100, 0, 255);
        ledcWrite(_MotorA_ch, 0);
        ledcWrite(_MotorB_ch, 255);
        m2 = 50;
        m2 = map(m2, 0, 100, 0, 255);
        ledcWrite(_MotorC_ch, 0);
        ledcWrite(_MotorD_ch, 255);
  delay(1000);
          m1 = 50;
          m1 = map(m1, 0, 100, 0, 255);
          ledcWrite(_MotorA_ch, 255);
          ledcWrite(_MotorB_ch, 0);
          m2 = 50;
          m2 = map(m2, 0, 100, 0, 255);
          ledcWrite(_MotorC_ch, 255);
          ledcWrite(_MotorD_ch, 0);
  delay(1000);
      speedm = 50;
      speedm = map(speedm, 0, 100, 0, 255);
      ledcWrite(_MotorA_ch, speedm);
      ledcWrite(_MotorB_ch, 0);
      ledcWrite(_MotorC_ch, 0);
      ledcWrite(_MotorD_ch, speedm);
  delay(1000);
        speedm = 50;
        speedm = map(speedm, 0, 100, 0, 255);
        ledcWrite(_MotorA_ch, 0);
        ledcWrite(_MotorB_ch, speedm);
        ledcWrite(_MotorC_ch, speedm);
        ledcWrite(_MotorD_ch, 0);
  delay(1000);
    ledcWrite(_MotorA_ch, 255);
    ledcWrite(_MotorB_ch, 255);
    ledcWrite(_MotorC_ch, 255);
    ledcWrite(_MotorD_ch, 255);


}