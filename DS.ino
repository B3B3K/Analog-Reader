#include "SSD1306_minimal.h"
SSD1306_Mini oled;

char sonuc[10];
int deger=0;

void setup()
{

oled.init(0x3c);
oled.clear();
pinMode(3,OUTPUT);

}
void loop()
{

deger = analogRead(A2)*0.00488*100;

if(deger>27)
{
digitalWrite(3,1);
}

else

{
digitalWrite(3,0);
}
sprintf(sonuc, "%i",deger);

oled.clear();
oled.cursorTo(0, 3); 
oled.printString("AKIM:");
oled.cursorTo(90, 3);
oled.printString(sonuc);
delay(300);

}
