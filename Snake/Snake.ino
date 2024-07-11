#include <Servo.h>  //include the servo library

Servo myservo;  // create servo object to control a servo

void setup() {
  pinMode(8, INPUT);  // declare pin 8 as an input pin
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(0);   // turns the servo to the start point
}

void loop() {
  int val = digitalRead(8);  // reads the input value of the obstacle avoidance sensor
  if (val == LOW) {          // if the value of the sensor is HIGH, it means that an obstacle is detected
    myservo.write(60);       // the servo is turned to 60 degrees
    delay(200);
    myservo.write(0);
    delay(300);
  }
}