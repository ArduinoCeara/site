void setup() {
  //pinMode(7, OUTPUT);
          //pin 76543210
  DDRD = DDRD | 11111100;
  PORTD = B00001000;
}

void loop() {
  /*
   * LIGA LED FORMA 01
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  */
  /*
   *  LIGA LED FORMA 02
  for (byte x=7; x<=11; x++){
    digitalWrite(x, HIGH);
  }
  */
  //digitalWrite(7, 1);   LIGA LED FORMA 03

}
