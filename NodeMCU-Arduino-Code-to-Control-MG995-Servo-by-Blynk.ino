#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<Servo.h>
char auth[] = "OaHxAzn-lFkotV4zA-NOLATeZDn47aHL";
char ssid[] ="Test";
char pass[] = "qwerttyy";
Servo servo;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(D4); // NodeMCU D4 pin
   }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V2)

{

  servo.write(0);

}

BLYNK_WRITE(V3)

{

  servo.write(150);

}
