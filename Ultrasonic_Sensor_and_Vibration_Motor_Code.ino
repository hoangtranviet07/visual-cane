#define echoPin 4
#define trigPin 3

#define echoPin01 7
#define trigPin01 8

#define echoPin02 11
#define trigPin02 12

long duration, duration01, duration02;
int distance, distance01, distance02;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin01, OUTPUT);
  pinMode(echoPin01, INPUT);
  pinMode(trigPin02, OUTPUT);
  pinMode(echoPin02, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor HC-SR04 Test");
  Serial.println("with Arduino Nano");
}


void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin01, LOW);
  digitalWrite(trigPin02, LOW);

  delay(200);

  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin01, HIGH);
  digitalWrite(trigPin02, HIGH);

  delay(1000);

  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  if(distance < 30) {
    digitalWrite(9, HIGH);
  }
  delay(200);
  if(distance > 30) {
    digitalWrite(9, LOW);
  }

  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println(" cm");



  digitalWrite(trigPin01, LOW);
  duration01 = pulseIn(echoPin01, HIGH);
  distance01 = duration01 * 0.034 / 2;
  if(distance01 < 30) {
    digitalWrite(10, HIGH);
  }
  delay(200);
  if(distance01 > 30) {
    digitalWrite(10, LOW);
  }

  Serial.print("Distance01:");
  Serial.print(distance01);
  Serial.println(" cm");



  digitalWrite(trigPin02, LOW);
  duration02 = pulseIn(echoPin02, HIGH);
  distance02 = duration02 * 0.034 / 2;
  if(distance02 < 30) {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  delay(200);
  if(distance02 > 30) {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
  Serial.print("Distance02:");
  Serial.print(distance02);
  Serial.println(" cm");
  }
}

