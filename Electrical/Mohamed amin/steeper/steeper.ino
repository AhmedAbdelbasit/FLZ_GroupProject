#define steppin 4 
#define dirpin 2
#define push 5
#define push2 8
#define sun 10
#define moon 11

#define CycleDelay 250

int steps = 0;
int brightsun;
int brightmoon;


void setup() {
  pinMode(steppin, OUTPUT);
  pinMode(dirpin, OUTPUT) ;
  pinMode(push, INPUT_PULLUP);
  pinMode(push2, INPUT_PULLUP);
  pinMode(moon, OUTPUT);
  pinMode(sun, OUTPUT);
}


