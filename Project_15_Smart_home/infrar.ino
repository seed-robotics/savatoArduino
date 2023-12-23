void infrarsensor(){
light = analogRead(A1);////Assign the analog value of A1 to light
  if (light < 300)//if variable light is less than 300
  {
    infrar = digitalRead(2);//assign the value of digital 2 to infrar 
    Serial.println(infrar);//output the value of variable infrar in new lines
    if (infrar == 1)
      {
       digitalWrite(13, HIGH);
      }
    else{
      digitalWrite(13, LOW);
      }
  }
}
