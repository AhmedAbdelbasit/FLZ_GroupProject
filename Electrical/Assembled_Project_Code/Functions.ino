void moveStep(int DirPin,int StepPin, int Delay, bool Direction){
  digitalWrite(DirPin, Direction);
  digitalWrite(StepPin, LOW);
  delay(StepLowDelay);
  digitalWrite(StepPin, HIGH);
  delay(Delay);
}


void readSwitches(){
  if(digitalRead(EastSwitch) == LOW){
    moveStep(SunDir, SunStep, SunDelay, HIGH);
    SunSteps ++;
    illuminateSunMoon();
  }else if(digitalRead(WestSwitch) == LOW){
    moveStep(SunDir, SunStep, SunDelay, LOW);
    SunSteps --;
    illuminateSunMoon();
  }
    
  if(digitalRead(FrontSwitch) == LOW){
    moveStep(TranslationDir, TranslationStep, TranslationDelay, HIGH);
    CameraDisplacement ++;
  }else if(digitalRead(BackSwitch) == LOW){
    moveStep(TranslationDir, TranslationStep, TranslationDelay, LOW);
    CameraDisplacement --;
  }
  
  if(digitalRead(RightSwitch) == LOW){
    moveStep(RotationDir, RotationStep, RotationDelay, HIGH);
    CameraDisplacement ++;
  }else if(digitalRead(LeftSwitch) == LOW){
    moveStep(RotationDir, RotationStep, RotationDelay, LOW);
    CameraDisplacement --;
  }
  
  /*
  if(digitalRead() == LOW)
    moveStep(,,);
  else if(digitalRead() == LOW)
    moveStep(,,);
  */
}
