int calculateTranslationDelay(int Speed){
  return(Circumference/(360*1.8*Speed));
}

void moveDistance(int Distance){
  TranslationSteps = (Distance/Circumference)*360/1.8;
  CameraDisplacement += (TranslationSteps*1.8*Circumference/360);
  
  if(TranslationSteps>0){
    digitalWrite(TranslationDir,HIGH);
  }else if (TranslationSteps<0){
    digitalWrite(TranslationDir,LOW);
    TranslationSteps = abs(TranslationSteps);
  }
  
  for (int x=0 ; x<=TranslationSteps ; x++){
    digitalWrite(TranslationStep, LOW);
    delay(StepLowDelay);
    digitalWrite(TranslationStep, HIGH);
    delay(TranslationDelay);
  }
}

