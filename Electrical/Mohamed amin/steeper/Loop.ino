void loop() {

  if (digitalRead(push)==LOW){
    stepforward();
   
  }

  if (digitalRead(push)==HIGH){ // to hold the rod
    digitalWrite(steppin,LOW);
  }

  if (digitalRead(push2)==LOW){
    stepback();
    
  }
  
  if(digitalRead(push2)==HIGH){ // to hold the rod
    digitalWrite(steppin,LOW);
  }

   illuminateSunMoon();

  delay(CycleDelay);
}
