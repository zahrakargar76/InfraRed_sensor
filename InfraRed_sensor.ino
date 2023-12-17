int Infrapin = 2;
int ledpin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(Infrapin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(Infrapin) == HIGH) {
    digitalWrite(ledpin, LOW);
  } else {
    digitalWrite(ledpin, HIGH);
  }
}
