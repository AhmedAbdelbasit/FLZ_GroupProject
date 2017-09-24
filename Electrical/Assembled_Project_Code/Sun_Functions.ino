void illuminateSunMoon(){
  if (SunSteps==-1)
    SunSteps = 199;
  else if (SunSteps==200)
    SunSteps = 0;
    
  if( SunSteps>=0 && SunSteps<=50 ){
    brightnessSunIncrease();
  }else if( SunSteps>50 && SunSteps<=100 ){
    brightnessSunDecrease();
  }else if( SunSteps>100 && SunSteps<=150 ){
    brightnessMoonIncrease();
  }else if( SunSteps>150 && SunSteps<=199 ){
    brightnessMoonDecrease();
  }
}

void brightnessSunIncrease(){     // from 0 step to 50 
  SunBrightness = map(SunSteps,0,50,0,255);
  analogWrite(SunLightPin, SunBrightness);
}

void brightnessSunDecrease(){     // from 50 to 100
  SunBrightness=map(SunSteps,50,100,255,0);
  analogWrite(SunLightPin, SunBrightness);
}
     
void brightnessMoonIncrease(){     // from 100 to 150
  MoonBrightness=map(SunSteps,100,150,0,255);
  analogWrite(MoonLightPin, MoonBrightness);
}

void brightnessMoonDecrease(){    // from 150 to 200
  MoonBrightness=map(SunSteps,150,200,255,0);
  analogWrite(MoonLightPin, MoonBrightness);
}
