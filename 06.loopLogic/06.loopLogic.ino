/*
  Author: 

  Learning Intention:
  The students understand loop logic and apply it to a range of control structures.
  
  Success Criteria:
    1.  I understand logic Logic is asking questions and based on the true and false answer repeating 
        or not repeating something
    2.  I can apply different comparison operators to get a desired outcome in a count and pre-test loop
        control structure 
    3.  I can read a simple logic flowchart
    4.  I know how to find the documentation for loop logic control structures

  Student Notes: 
  Comparison Operators
    - != (not equal to)
    - < (less than)
    - <= (less than or equal to)
    - == (equal to)
    - > (greater than)
    - >= (greater than or equal to)

    Boolean Operators
    - ! (logical not)
    - && (logical and)
    - || (logical or)


  Documentation: 
    https://www.arduino.cc/reference/en/#structure
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/06.loopLogic/Readme.md
    
  Schematic: 
    
*/
static unsigned int redLED = 6;
static unsigned int onBoardLED = 13;
static unsigned int buttonPIN = 4;
static unsigned int potPIN = A1;
bool onState = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial monitor is configured to 9600 baud rate");
  Serial.println("--------------------");
  pinMode(redLED, OUTPUT);
  pinMode(onBoardLED, OUTPUT);
  pinMode(buttonPIN, INPUT);
}

void loop() {
  bool reading = digitalRead(buttonPIN);
  if (reading == true) {
    onState = !onState;
  }

  digitalWrite(redLED, onState);
  delay(200);
}

