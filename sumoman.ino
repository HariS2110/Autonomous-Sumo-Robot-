///////////////////////////////////////////////////////////////////
int in1 = 2; //LEFT SIDE GO FORWARD
int in2 = 4; //LEFT SIDE GO BACKWARDs
int enA = 3; //LEFT SIDE POWER CONTROLLER
///////////////////////////////////////////////////////////////////
int in4 = 5; // RIGHT SIDE GO FORWARD
int in3 = 7; // RIGHT SIDE GO BACKWARDS
int enB = 6; // RIGHT SIDE POWER CONTROLLER
///////////////////////////////////////////////////////////////////
int echo = 9; // takes in the sound wave and calculates the distance using time.
int trig = 8; // shoots out a sound wave
long duration; // variable for the duration of sound wave travel
int distance; //variable for calculated distance
//////////////////////////////////////////////////////////////////
int frontBW = A0; // initialising the front black and white sensor 
int backBW = A5; // initialising the back black and white sensor 
int readingfront = 0;
int readingback = 0;
/////////////////////////////////////////////////////////////////

void setup() 
{
// STATING ALL THE L298N MOTORS AS OUTPUTS
pinMode(enA, OUTPUT); // Control the left side
pinMode(in1, OUTPUT); //
pinMode(in2, OUTPUT); // 
pinMode(enB, OUTPUT); // Control the right side
pinMode(in3, OUTPUT); //
pinMode(in4, OUTPUT); //
// starting the ultrasonic sensor
pinMode(trig, OUTPUT); // Sets the trigPin as an OUTPUT
pinMode(echo, INPUT); // Sets the echo pin as an input
Serial.begin(9600); // // Serial Communication line starts at baudrate 9600
/////////////////////////////////////////////////////////////////////////
pinMode(frontBW, INPUT); //black and white sensor
pinMode(backBW, INPUT);  
}

void loop() 
{
  readingfront = analogRead(frontBW);
  readingback = analogRead(backBW);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2; 
  
  if (readingfront < 150)
  {
    moveforward();
    moveright();
  }
  
  if (readingback < 150)
  {
    movebackward();
    moveleft();
  }

  if (distance < 10)
  {
    charge();
  }
}

void charge()
{
  digitalWrite(in1, LOW);    // MOVE THE WHEELS FORWARD FOR .5 SECOND
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 255);
  digitalWrite(enB, 255);
  delay(2000);

}

void moveforward()
{
  digitalWrite(in1, LOW);    // MOVE THE WHEELS FORWARD FOR .5 SECOND
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 10);
  digitalWrite(enB, 10);
  delay(500);

  digitalWrite(in1, LOW); // stop
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500);
}

void movebackward()
{
  digitalWrite(in1, HIGH);  // MOVE THE WHEELS BACKWARDS FOR .5 SECOND
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 10);
  digitalWrite(enB, 10);
  delay(500);

  digitalWrite(in1, LOW); // stop
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500);
}

void moveright()
{
  digitalWrite(in1, HIGH); // turn right
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 150);
  digitalWrite(enB, 0);
  delay(500);

  digitalWrite(in1, LOW); // stop
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500);
}

void moveleft()
{
  digitalWrite(in1, LOW); // turn left
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 0);
  digitalWrite(enB, 150);
  delay(500);

  digitalWrite(in1, LOW); // stop
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500);
}
