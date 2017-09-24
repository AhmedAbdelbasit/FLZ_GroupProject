void loop() {
  readSwitches();

  if(Serial.available() > 0){
    parseInstruction();
  }

  
}
