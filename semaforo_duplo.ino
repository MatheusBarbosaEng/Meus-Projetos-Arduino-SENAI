int ledvm1 = 13;
int ledam1 = 12;
int ledvd1 = 11;

int ledvm2 = 7;
int ledam2 = 6;
int ledvd2 = 5;

int tempoam = 2000;
int tempovd = 3000;

void setup() {
  pinMode(ledvm1, OUTPUT);
  pinMode(ledam1, OUTPUT);
  pinMode(ledvd1, OUTPUT);

  pinMode(ledvm2, OUTPUT);
  pinMode(ledam2, OUTPUT);
  pinMode(ledvd2, OUTPUT);
}

void loop() {
  digitalWrite(ledvm1, HIGH);
  digitalWrite(ledam1, LOW);
  digitalWrite(ledvd1, LOW);
  digitalWrite(ledvm2, LOW);
  digitalWrite(ledam2, LOW);
  digitalWrite(ledvd2, HIGH);
  delay(tempovd);

  digitalWrite(ledvm1, HIGH);
  digitalWrite(ledam1, LOW);
  digitalWrite(ledvd1, LOW);
  digitalWrite(ledvm2, LOW);
  digitalWrite(ledam2, HIGH);
  digitalWrite(ledvd2, LOW);
  delay(tempoam);

  digitalWrite(ledvm1, LOW);
  digitalWrite(ledam1, LOW);
  digitalWrite(ledvd1, HIGH);
  digitalWrite(ledvm2, HIGH);
  digitalWrite(ledam2, LOW);
  digitalWrite(ledvd2, LOW);
  delay(tempovd);

  digitalWrite(ledvm1, LOW);
  digitalWrite(ledam1, HIGH);
  digitalWrite(ledvd1, LOW);
  digitalWrite(ledvm2, HIGH);
  digitalWrite(ledam2, LOW);
  digitalWrite(ledvd2, LOW);
  delay(tempoam);
  
}
