#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

#define joyX A0
#define joyY A1

// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
int buzzerPin = 8;
// defines variables
long duration;
int distance;
long Alow = 440.00;
long Asharp = 466.16;
long B = 493.88;
long C = 523.25;
long Csharp = 554.37;
long D = 587.33;
long Dsharp = 622.25;
long E = 659.25;
long F = 698.46;
long Fsharp = 739.99;
long G = 783.99;
long Gsharp = 830.61;
long Ahigh = 880.00;

void setup() {
  // put your setup code here, to run once: 
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600); // Starts the serial communication
  myservo.attach(11);
  
}

void loop() {

  // put your main code here, to run repeatedly:
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);

  if (yValue > 521) {
    
    myservo.write(yValue/9);              // tell servo to go to position in variable 'pos'
                         // waits 15ms for the servo to reach the position
      
  }
  if (yValue < 518) {
    myservo.write(yValue/9);
  }
  
  
 
  //print the values with to plot or view
  Serial.print(xValue);
  Serial.print("\t");
  Serial.println(yValue);

  
              // put your main code here, to run repeatedly:
  // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    // Calculating the distance
    distance = duration * 0.034 / 2;
    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);
    if (distance < 10) {
      tone(buzzerPin, Alow, 1000);
    }
    if (distance > 10 && distance <= 20) {
      tone(buzzerPin, Asharp, 1000);
    }
    if (distance > 20 && distance <= 30) {
      tone(buzzerPin, B, 1000);
    }
    if (distance > 30 && distance <= 40) {
      tone(buzzerPin, C, 1000);
    }
    if (distance > 40 && distance <= 50) {
      tone(buzzerPin, Csharp, 1000);
    }
    if (distance > 50 && distance <= 60) {
      tone(buzzerPin, D, 1000);
    }
    if (distance > 60 && distance <= 70) {
      tone(buzzerPin, Dsharp, 1000);
    }
    if (distance > 70 && distance <= 80) {
      tone(buzzerPin, E, 1000);
    }
    if (distance > 80 && distance <= 90) {
      tone(buzzerPin, F, 1000);
    }
    if (distance > 90 && distance <= 100) {
      tone(buzzerPin, Fsharp, 1000);
    }
    if (distance > 100 && distance <= 110) {
      tone(buzzerPin, G, 1000);
    }
    if (distance > 110 && distance <= 120) {
      tone(buzzerPin, Gsharp, 1000);
    }
    if (distance > 120 && distance <= 130) {
      tone(buzzerPin, Ahigh, 1000);
    }                // waits 15ms for the servo to reach the position
  

  
  
};
