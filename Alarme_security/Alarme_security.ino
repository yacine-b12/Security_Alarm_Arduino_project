int alert;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(4, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int alert = analogRead(0);

  if (alert > 700){  
    tone(3, 280, 500);
    Serial.println("!!!!");
    delay(1000);
  }
}
