// testing 2 releys
// each reley is connected to 5V source and 1 digital pin to control it
// reley is off if voltage is provided to the gate


int FirstReleyPin = 2;
int SecondReleyPin = 3;

void setup() {
 
  // init pins
  pinMode(FirstReleyPin, OUTPUT);
  pinMode(SecondReleyPin, OUTPUT);
  
  // set both releys to off by default
  digitalWrite(FirstReleyPin, HIGH);
  digitalWrite(SecondReleyPin, HIGH);
  
  // start serial port at 9600 bps for debugging
  Serial.begin(9600);
  
  // fake loading
  Serial.print("Loading... ");
  delay(3000);
  Serial.print("Loaded!");
}

void loop() {
 
  // Turn on reley 1 for 2 seconds
  Serial.println("Turning 1 ON");
  digitalWrite(FirstReleyPin, LOW);
  delay(2000);
  
  // Turn off reley 1
   Serial.println("Turning 1 OFF");
  digitalWrite(FirstReleyPin, HIGH);

  // wait for 2 seconds
  delay(2000);

  // Turn on reley 2 for 2 seconds
  Serial.println("Turning 2 ON");
  digitalWrite(SecondReleyPin, LOW);
  delay(2000); 
  
  // Turn off reley 2
  Serial.println("Turning 2 OFF");
  digitalWrite(SecondReleyPin, HIGH);  
  
  // wait for 2 seconds
  delay(2000);
}
