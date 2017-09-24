#define dirPin 4
#define stepPin 3
#define rightbutton 6 //( to move foroward )
#define leftbutton 7  //( to move backword )
#define freebutton 8  //( to continous moving )

char Command = 'X';
int Steps;
int Speed;
int state=0;

const int MinSpeed=1;
const int MaxSpeed=100;
const int MinDelay=50;
const int MaxDelay=3000;

int DelayConstant = 25;

void setup() {
  pinMode(rightbutton,INPUT_PULLUP);
  pinMode(leftbutton,INPUT_PULLUP);  
  pinMode (freebutton, INPUT_PULLUP);
}


