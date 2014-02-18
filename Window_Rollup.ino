/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int FLU = 12;
int FRU = 11;
int RLU = 10;
int RRU = 9;
int FLD = 8;
int FRD = 7;
int RLD = 6;
int RRD = 5;
int TimeUp = 3250;
int TimeDown = 3250;
int VentUp = 250;
int VentDown = 250;
const int upButton = 3;     // the number of the pushbutton pin
const int downButton = 2;     // the number of the pushbutton pin

int buttonUp = 0;
int buttonDown = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(FLU, OUTPUT); 
  pinMode(FRU, OUTPUT);
  pinMode(RLU, OUTPUT);
  pinMode(RRU, OUTPUT);
  pinMode(FLD, OUTPUT);
  pinMode(FRD, OUTPUT);
  pinMode(RLD, OUTPUT);
  pinMode(RRD, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(upButton, INPUT); 
  pinMode(downButton, INPUT); 
  
  digitalWrite(FLU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRU, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  digitalWrite(FLD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRD, HIGH);   // turn the LED on (HIGH is the voltage level)
}

// the loop routine runs over and over again forever:
void loop() {
  
  buttonUp = digitalRead(upButton);
  buttonDown = digitalRead(downButton);
  
  if (buttonUp == HIGH) 
  {
    goto WindowsUp;
  }
  else if (buttonDown == HIGH)
  {
    goto WindowsDown;
  }
  else
  {
    goto DoNothing;
  }
  
  WindowsUp:
  digitalWrite(FLU, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRU, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLU, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRU, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(TimeUp);  
  digitalWrite(FLU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRU, HIGH);   // turn the LED on (HIGH is the voltage level)
  goto DoNothing;
  
  WindowsDown:
  digitalWrite(FLD, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRD, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLD, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRD, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(TimeDown);  
  digitalWrite(FLD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRD, HIGH);   // turn the LED on (HIGH is the voltage level)
  goto DoNothing;
  
  VentUp:
  digitalWrite(FLU, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRU, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLU, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRU, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(VentUp);  
  digitalWrite(FLU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLU, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRU, HIGH);   // turn the LED on (HIGH is the voltage level)
  goto DoNothing;
  
  VentDown:
  digitalWrite(FLD, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRD, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLD, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRD, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(VentDown);  
  digitalWrite(FLD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(FRD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RLD, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RRD, HIGH);   // turn the LED on (HIGH is the voltage level)
  goto DoNothing;
  
  DoNothing:
  ;
  
}
