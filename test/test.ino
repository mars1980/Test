

void setup() {
  
Serial.begin(9600);
}

void loop() {
  int photocell = analogRead(A0);
  
  Serial.print("photocell reads at: ");
  Serial.println(photocell);
}
