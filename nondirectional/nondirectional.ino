  // defines pins numbers
 const int trigPin = 9;
 const int echoPin = 10;
 int tactorport = 2;
 int tactorport2 = 4;
 // defines variables
 long duration;
 int distance;
 long next_buzz = 0;
 void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
   pinMode(echoPin, INPUT); // Sets the echoPin as an Input
   pinMode(tactorport, OUTPUT);
   pinMode(tactorport2, OUTPUT);
   Serial.begin(9600); // Starts the serial communication
 }
 void loop() {
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
   //   Prints the distance on the Serial Monitor
   Serial.println(distance);
      if (distance >= 32 && distance <=38 || distance > 200) {
     digitalWrite(tactorport2, 0);
     digitalWrite(tactorport, 0);
   }
   else{
     digitalWrite(tactorport2, 5);
     digitalWrite(tactorport, 5);
   }
 }
