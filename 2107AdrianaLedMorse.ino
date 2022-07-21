// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);  //A
  delay(400);                       
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(400);                      
  digitalWrite(LED_BUILTIN, HIGH);  //D
  delay(400); 
  digitalWrite(LED_BUILTIN, LOW);   
  delay(400);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(400);
  digitalWrite(LED_BUILTIN, LOW);  //R 
  delay(400); 
  digitalWrite(LED_BUILTIN, LOW);  
  delay(400);                       
  digitalWrite(LED_BUILTIN, HIGH);    
  delay(200);                      
  digitalWrite(LED_BUILTIN, LOW);  //I
  delay(200); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
  
}
