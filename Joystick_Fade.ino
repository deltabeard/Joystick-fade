/*
 Joystick LED Fade

 This example shows how to fade a Bi-colour red/green LED on pin 9 and pin 10
 using the analogWrite() function.

 2014 deltabeard

 */

int ledGreen = 9;           // the pin that the LED is attached to
int ledRed = 10;

int up_button = 2;
int down_button = 4;
int left_button = 5;
int right_button = 3;
int start_button = 6;
int select_button = 7;
int analog_button = 8;
const int led = 13;
int x_axis = A0;
int y_axis = A1;
int buttons[] = {up_button, down_button, left_button, right_button, start_button, select_button, analog_button};



// the setup routine runs once when you press reset:
void setup() {
  for (int i; i < 7; i++)
  {
   pinMode(buttons[i], INPUT);
   digitalWrite(buttons[i], HIGH);
  }
  // declare pin 9 to be an output:
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  if(digitalRead(right_button) == 0) {
  // set the brightnesright_buttons of pin 9:
  analogWrite(ledGreen, map(analogRead(x_axis), 0, 680, 0, 255));
  analogWrite(ledRed, map(analogRead(y_axis), 0, 680, 0, 255));
  } else {
    analogWrite(ledGreen, 0);
    analogWrite(ledRed, 0);
  }
}

