int sensorPin = A1; //variable for temperature sensor
int ledPinA = 5;    //variable for the LED pins
int ledPinB = 6;    //variable for the LED pins
int ledPinC = A2;   //variable for the LED pins
int ledPinD = A4;   //variable for the LED pins
int ledPinE = A3;   //variable for the LED pins
int buzzer = 0;     //variable for the buzzer
int sensorValue = 0;//variable for the temperature sensor
 
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPinA, OUTPUT); //set LED pin as output
  pinMode(ledPinB, OUTPUT); //set LED pin as output
  pinMode(ledPinC, OUTPUT); //set LED pin as output
  pinMode(ledPinD, OUTPUT); //set LED pin as output
  pinMode(ledPinE, OUTPUT); //set LED pin as output
  pinMode(buzzer, OUTPUT);  //set buzzer as output
}
 
void loop() {
  sensorValue = analogRead(sensorPin);   // read the value from the sensor:
  if(sensorValue > 160)
  {
    digitalWrite(7, HIGH);
    digitalWrite(12, LOW);
    delay(1);
    digitalWrite(7, LOW);
    digitalWrite(12, HIGH);
    sensorValue = 20;
  }
  else
  {
    sensorValue = 200;
  }
  digitalWrite(ledPinA, HIGH); //turn the LED on
  digitalWrite(ledPinB, HIGH); //turn the LED on
  digitalWrite(ledPinC, HIGH); //turn the LED on
  digitalWrite(ledPinD, HIGH); //turn the LED on
  digitalWrite(ledPinE, HIGH); //turn the LED on
  delay(sensorValue);    // stop the program for the oppostie of <sensorValue> within 200 milliseconds:
  digitalWrite(ledPinA, LOW);  //turn the LED off
  digitalWrite(ledPinB, LOW);  //turn the LED off
  digitalWrite(ledPinC, LOW);  //turn the LED off
  digitalWrite(ledPinD, LOW);  //turn the LED off
  digitalWrite(ledPinE, LOW);  //turn the LED off
  delay(sensorValue);    // stop the program for the oppostie of <sensorValue> within 200 milliseconds:
}
