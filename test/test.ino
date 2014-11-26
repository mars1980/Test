

void setup()
{
  Serial.begin(9600);
  // 1. write the first byte to processing...
  Serial.write('0'); 
}

void loop()
{
  //3. if processing sends anthing, then read the sensor
  if (Serial.available() > 0)
  {
    //this will clear the buffer
    char input = Serial.read();
    int val = analogRead(A0)/4;

    //4. send the sensor data back over to processing
    Serial.write(val);
  }
}

