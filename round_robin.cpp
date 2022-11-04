/* Round Robin */	

int led1 = 7, led2 = 6, led3 = 5, led4 = 4, led5 = 3, led6 = 2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(200); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(200); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200); 
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(200); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(200); 
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(200); 
  digitalWrite(led6, LOW);
  delay(200);
  digitalWrite(led6, HIGH);
  delay(200); 
  digitalWrite(led6, LOW);
  digitalWrite(led5, HIGH);
  delay(200); 
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);
  delay(200); 
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);
  delay(200); 
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(200); 
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  delay(200); 
  digitalWrite(led1, LOW);
  delay(200);
}
