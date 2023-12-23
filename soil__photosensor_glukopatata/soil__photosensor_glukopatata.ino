/*
Keyestudio smart home Kit for Arduino
Project 13
Soil Humidity
http://www.keyestudio.com
*/
int babouinos;
int brokolakis = A4;
int led = 8;
volatile int value;
void setup () {
Serial.begin (9600); // Set the serial port baud rate to 9600
value = 0;
pinMode (A2, INPUT); // Soil sensor is at A2, the mode is input
pinMode (led, OUTPUT);
}
void loop () {
//Serial.print ("Soil moisture value:"); // Print the value of soil moisture
Serial.print ("");

delay (1000); // Delay 0.5S
value = analogRead (A2); // Read the value of the soil sensor
babouinos = analogRead (brokolakis);
//Serial.println (value);
//Serial.println (babouinos);
 if (babouinos <200)
 {
if (value <300) // If the value is less than 300

{
  Serial.print ("Soil moisture value:");
Serial.println (value);
Serial.println (babouinos);
delay (1000); // Delay 0.3S
digitalWrite (led, LOW);
}
else if ((value>=300) && (value <= 620)) // If the value is greater than 300 and less than 700

{
  Serial.print ("Soil moisture value:");
  Serial.println (value);
  Serial.println (babouinos);
Serial.println  ("humid soil"); // LCD screen printing humid soil
delay (1000); // Delay 0.3S
} else if (value> 620) // If the value is greater than 700
{Serial.print ("Soil moisture value:");
  Serial.println (value);
Serial.println (babouinos);
Serial.println  ("in water"); /// LCD screen printing 
digitalWrite (led, HIGH);
delay (300); // Delay 0.3S
}}}
//
