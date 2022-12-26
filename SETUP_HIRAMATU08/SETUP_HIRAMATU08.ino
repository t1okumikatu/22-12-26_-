#include <Arduino.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include <AsyncElegantOTA.h>
const char ssid[] = "HIRAMATU08";
const char pass[] = "";
const IPAddress ip(192,168,4,8);
const IPAddress subnet(255,255,255,0);
AsyncWebServer server(80);
void setup(){
   setupA();
}
void loop(){
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
}           
