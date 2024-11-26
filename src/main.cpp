#include <Arduino.h>
#include <Servo.h>

#define Servo_bl 9
#define Servo_br 10
#define Servo_fl 11
#define Servo_fr 12

Servo motor_bl;
Servo motor_br;
Servo motor_fl;
Servo motor_fr;
int maxP = 120;
int maxN = 180 - maxP;
