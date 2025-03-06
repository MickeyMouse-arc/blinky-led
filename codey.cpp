#define LED_PIN 2  

void setup() {
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  digitalWrite(LED_PIN, HIGH); 
  delay(250);               
  digitalWrite(LED_PIN, LOW);  
  delay(250);                
}

