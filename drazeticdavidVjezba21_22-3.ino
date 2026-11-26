unsigned int adc = 612;

void setup(){
  Serial.begin(9600);

  byte postotak = (adc * 100UL) / 1023;
  Serial.print("Postotak: ");
  Serial.println(postotak);

  unsigned int napon = (adc * 5000UL) / 1023;
  Serial.print("Napon (mV): ");
  Serial.println(napon);

  byte bajt =adc;
  Serial.print("DEC:  ");
  Serial.println(bajt, DEC );
  Serial.print("HEX:  ");
  Serial.println(bajt,HEX);
  Serial.print("BIN:  ");
  Serial.println(bajt,BIN);
  


}

void loop() {
  
}