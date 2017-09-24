void setup() {
  Serial.begin(9600);                         //use serial monitor
  pinMode(rightbutton,INPUT_PULLUP);          //set buttons as input pullup
  pinMode(leftbutton,INPUT_PULLUP);           
}

