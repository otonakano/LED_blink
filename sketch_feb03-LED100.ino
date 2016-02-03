void LED_blink(int count, int interval);

void setup(){
  pinMode(13,OUTPUT);
}

void loop(){
  LED_blink(15, 300);
  LED_blink(10,200);
  LED_blink(5,100);
}

void LED_blink(int count, int interval){
  int i = 0;
  while(i < count){
    digitalWrite(13,HIGH);
    delay(interval);
    digitalWrite(13,LOW);
    delay(interval);
    i++;
  }
}

