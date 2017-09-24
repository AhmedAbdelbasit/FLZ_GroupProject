void parseInstruction(){
  
  Command = Serial.read();
  
  if( Command == 'M'){
    int Distance = Serial.parseInt();
    moveDistance(Distance);
  }else if( Command == 'V' ){
    TranslationSpeed = Serial.parseInt();
    TranslationSpeed = constrain( TranslationSpeed, MinTranslationSpeed, MaxTranslationSpeed);
    TranslationDelay = calculateTranslationDelay(TranslationSpeed);
  }else if( Command == 'R' ){
    int Digrees = Serial.parseInt();
    rotateDegrees(Digrees);
  }else if( Command == 'S' ){
    RotationSpeed = Serial.parseInt();
    RotationSpeed = constrain( RotationSpeed, MinRotationSpeed, MaxRotationSpeed);
    RotationDelay = calculateRotationDelay(RotationSpeed);
  }
  Command = 'X';
}

