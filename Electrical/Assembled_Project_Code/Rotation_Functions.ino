int calculateRotationDelay(int Speed){
  return(Circumference/(360*1.8*Speed));
}

void rotateDegrees(int Degrees){
  RotationSteps = Degrees/1.8;
  CameraAngle += (RotationSteps * 1.8);
  
  if(RotationSteps>0){
    digitalWrite(RotationDir,HIGH);
  }else if (RotationSteps<0){
    digitalWrite(RotationDir,LOW);
    RotationSteps = abs(RotationSteps);
  }
  
  for (int x=0 ; x<=RotationSteps ; x++){
    digitalWrite(RotationStep, LOW);
    delay(StepLowDelay);
    digitalWrite(RotationStep, HIGH);
    delay(RotationDelay);
  }
}

