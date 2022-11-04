/* FIFO Code */

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
  delay(2000); /* delay time of 2 seconds */
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(5000); /* delay time of 5 seconds */
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(3000); /* delay time of 3 seconds */
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(6000); /* delay time of 6 seconds */
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(4000); /* delay time of 4 seconds */
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(7000); /* delay time of 7 seconds */
  digitalWrite(led6, LOW);
}
