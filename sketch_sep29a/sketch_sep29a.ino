int x = 0; 

void setup() {
  Serial.begin(9600);  
}

void loop() {

  Serial.println(random(-100, 100)); // Escribe en el puerto un numero aleatorio de -100 a 100
  delay(500);
}
