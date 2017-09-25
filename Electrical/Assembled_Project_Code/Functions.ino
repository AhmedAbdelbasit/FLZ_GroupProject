void moveStep(int DirPin,int StepPin, int Delay, bool Direction){
  digitalWrite(DirPin, Direction);
  digitalWrite(StepPin, LOW);
  delay(StepLowDelay);
  digitalWrite(StepPin, HIGH);
  delay(Delay);
}


void readSwitches(){

  // Sun and Moon
  if(digitalRead(EastSwitch) == LOW){
    moveStep(SunDir, SunStep, SunDelay, HIGH);
    SunSteps ++;
    illuminateSunMoon();
  }else if(digitalRead(WestSwitch) == LOW){
    moveStep(SunDir, SunStep, SunDelay, LOW);
    SunSteps --;
    illuminateSunMoon();
  }

  // Translation
  if(digitalRead(FrontSwitch) == LOW){
    moveStep(TranslationDir, TranslationStep, TranslationDelay, HIGH);
    CameraDisplacement += DistancePerStep;
  }else if(digitalRead(BackSwitch) == LOW){
    moveStep(TranslationDir, TranslationStep, TranslationDelay, LOW);
    CameraDisplacement -= DistancePerStep;
  }

  // Rotation
  if(digitalRead(RightSwitch) == LOW){
    moveStep(RotationDir, RotationStep, RotationDelay, HIGH);
    CameraAngle += AnglePerStep;
  }else if(digitalRead(LeftSwitch) == LOW){
    moveStep(RotationDir, RotationStep, RotationDelay, LOW);
    CameraAngle -= AnglePerStep;
  }

  // River
  if(digitalRead(RiverFrontSwitch) == LOW){
    moveStep(RiverDir, RiverStep, RiverDelay, HIGH);
  }else if(digitalRead(RiverFrontSwitch) == LOW){
    moveStep(RiverDir, RiverStep, RiverDelay, LOW);
  }
}
