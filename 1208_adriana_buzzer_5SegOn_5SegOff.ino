void setup() 
{
  
}

void loop() 
{
  //generar tono de 440Hz durante 1000 ms
  tone(9, 2000);
  delay(5000);

  //detener tono durante 500ms  
  noTone(9);
  delay(5000);

  //generar tono de 523Hz durante 500ms, y detenerlo durante 500ms.
  //tone(9, 100, 5000);
  //delay(5000);
}
