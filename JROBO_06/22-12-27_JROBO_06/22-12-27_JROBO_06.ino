#include <Nendo.h>
Nendo nendo(13);
void setup(){
 nendo.setupA();//これは、削除しないでください
}
void loop(){
  //--見本のLチカですので削除OKです
  //nendo.dash();//50ms
  //nendo.dash();
  //nendo.dash();
  //nendo.dot();//2000ms
  //nendo.dot();
  //nendo.dot();
  //-----------------
digitalWrite(13,HIGH);
delay(1500);
digitalWrite(13,LOW);
delay(1500);
}           
