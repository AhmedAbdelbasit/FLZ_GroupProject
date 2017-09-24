void loop() {
  if( digitalRead(rightbutton)==LOW ){
    delay(250);
    digitalWrite(dirPin,HIGH); 
    digitalWrite(stepPin, HIGH); // first button moveforward
    delay(10);
    digitalWrite(stepPin, LOW);
    delay(10);
  }else if (digitalRead(leftbutton)==LOW){
    delay(250);
    digitalWrite(dirPin,LOW); 
    digitalWrite(stepPin, HIGH);  // second button movebackword 
    delay(10);
    digitalWrite(stepPin, LOW);
    delay(10);
 }else if(digitalRead(freebutton)==LOW){
  delay(250);
  state=1-state ;
         if (state==1){
              digitalWrite(dirPin,HIGH); 
              digitalWrite(stepPin, HIGH);
              delay(10);
              digitalWrite(stepPin, LOW);
              delay(10);
             } else {
                 digitalWrite(stepPin, HIGH);  // hold the motor while there is no input
                   }
    }
 
 else {
      digitalWrite(stepPin, HIGH);  // hold the motor while there is no input 
     
  }
  
  
     
  }
  
