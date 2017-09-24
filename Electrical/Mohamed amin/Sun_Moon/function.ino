void stepforward(){
  digitalWrite(dirpin,LOW);
  digitalWrite(steppin,HIGH);
  delayMicroseconds(2000);
  digitalWrite(steppin,LOW);
  delayMicroseconds(2000);
  steps++;
}


void stepback(){
  digitalWrite(dirpin,HIGH);
  digitalWrite(steppin,HIGH);
  delayMicroseconds(2000);
  digitalWrite(steppin,LOW);
  delayMicroseconds(2000);
  steps--;
}

void brightnessSunIncrease(){     // from 0 step to 50 
  brightsun = map(steps,0,50,0,255);
  analogWrite(sun,brightsun);
}


void brightnessSunDecrease(){     // from 50 to 100
  brightsun=map(steps,50,100,255,0);
  analogWrite(sun,brightsun);
}

      
void brightnessMoonIncrease(){     // from 100 to 150
  brightmoon=map(steps,100,150,0,255);
  analogWrite(moon,brightmoon);
}


void brightnessMoonDecrease(){    // from 150 to 200
  brightmoon=map(steps,150,200,255,0);
  analogWrite(moon,brightmoon);
}

void illuminateSunMoon(){
  if(steps>=0&&steps<=50){
    brightnessSunIncrease();
  }if(steps>=50&&steps<=100){
    brightnessSunDecrease();
  }if(steps>=100&&steps<=150){
    brightnessMoonIncrease();
  }if(steps>=150&&steps<=200){
    brightnessMoonDecrease();
  } if (steps==-1){
    steps=200;
  }
  if (steps==201)
  {
    steps=0;
  }
}


