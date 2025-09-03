#include <Servo.h>
const int TRIG_PIN = 8;
const int ECHO_PIN = 7;
int check = 0;

// Anything over 400 cm (corresponding to a 2320 us pulse) is “out of range”
const unsigned int MAX_DIST = 23200; // an unsigned int only stores positive values

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;  // variable to store the servo position

void setup() {
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  // The Trigger pin will tell the sensor to range find
  pinMode(TRIG_PIN, OUTPUT);
  digitalWrite(TRIG_PIN, LOW);

  // We’ll use the serial monitor to view the sensor output
  Serial.begin(9600);

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if(digitalRead(A0) == LOW) {
      check++;
      Serial.println(check);
  }
  if(check % 2 == 1) {
      // the following code is servo motor

    for (pos = 0; pos <= 60; pos += 1) { // goes from 0 degrees to 60 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 60; pos >= 0; pos -= 1) { // goes from 60 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
     delay(15);                       // waits 15ms for the servo to reach the position
   }
  }
}

