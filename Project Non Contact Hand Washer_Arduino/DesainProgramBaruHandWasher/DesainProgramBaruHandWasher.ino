int airPin = 5;
int sabunPin = 8;
int blowerPin = 7;
int ultVal = 0;

int LEDair = 11;
int LEDsabun = 12;
int LEDblower = 13;

int pirState = LOW;
#define trigPin 3
#define echoPin 4
#define led 10


void setup() {
  Serial.begin (9600);
  pinMode(airPin, OUTPUT);
  pinMode(sabunPin, OUTPUT);
  pinMode(blowerPin, OUTPUT);
  pinMode(LEDair, OUTPUT);
  pinMode(LEDsabun, OUTPUT);
  pinMode(LEDblower, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  }
