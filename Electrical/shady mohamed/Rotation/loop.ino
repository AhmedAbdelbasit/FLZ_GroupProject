
void loop() {
                                              
  if(     digitalRead(rightbutton)==LOW ){       //enable motor to rotate 1 step clockwise
          delay(ButtonDelay);
          digitalWrite(dirPin,HIGH);
          digitalWrite(stepPin, HIGH);
          delay(StepDelay);
          digitalWrite(stepPin, LOW);
          delay(StepDelay);
                 
  }else if (digitalRead(leftbutton)==LOW){         //enable motor to rotate 1 step counterclockwise
            delay(ButtonDelay);
            digitalWrite(dirPin,LOW); 
            digitalWrite(stepPin, HIGH);
            delay(StepDelay);
            digitalWrite(stepPin, LOW);
            delay(StepDelay);
  }else {                                           
    digitalWrite(stepPin, HIGH);                     //enable holding torque
  }



  
  if(Serial.available() > 0){             //using serial monitor as method to define the speed and the angel
    Command = Serial.read();
  
    if( Command == 'R'){                        //input rotation in negative and possitive value ,possitive value for CW direction and vice versa
           Degrees = Serial.parseInt();       
           Steps=Degrees* GearRatio/1.8;       // the equation between angel and steps in CW and CCW direction 
           Serial.print("degrees ");
           Serial.println(Degrees); 
           Serial.print("steps ");
           Serial.println(Steps);
          
       if (Steps>0){
             digitalWrite(dirPin,HIGH);      //enable the rotation in CW direction
       }else if (Steps<0){
              digitalWrite(dirPin,LOW);      //enable the rotation in CCW direction
              Steps = abs(Steps);            //make variable Steps possitive
      }
      
      for (int x=0 ; x<=Steps ; x++){        //the motor starts taking steps as defined upper
            digitalWrite(stepPin, LOW);
            delay(StepDelay);
            digitalWrite(stepPin, HIGH);
            delay(DelayConstant);
             }
      
    }else if( Command == 'S' ){             
           Speed = Serial.parseInt();                                           //define the speed value
           DelayConstant=map(Speed,MinSpeed,MaxSpeed,MaxDelay,MinDelay);        
           Serial.print("speed ");
           Serial.println(Speed);
           Serial.print("Delay Constant ");
           Serial.println(DelayConstant);
      
       }
    Command = 'X';
  }
  
}
