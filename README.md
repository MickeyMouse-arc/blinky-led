# blinky-led

in the absence of uno had to use esp32

esp32 board
led
resistor
jumper wire

connecting the positive side(long leg) of the led to the p2 pin of esp32 via breadboard/jumpers
connecting the negative side(short leg) of the led to the one end of the resistor
connecting the other end of the resistor to the ground in esp32
compile and upload the code 

done


defined gpio2 
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);   made the defined LED_PIN as OUTPUT
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   the led will be turned on when HIGH
  delay(250);   delay 250 is given for the next line of code to get processed (0.25 seconds)                
  digitalWrite(LED_PIN, LOW);   the led will be turned off when LOW
  delay(250);   delay 250 is given for the next line of code to get procssed (0.25 seconds)
}
 
