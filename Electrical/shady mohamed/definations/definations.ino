  //define pins number
  #define dirPin 4                 
  #define stepPin 3
  #define rightbutton 5
  #define leftbutton 8

  #define StepDelay 25      //time for half step
  #define ButtonDelay 400   //time for button to be pressed

  //define variables 
  char Command = 'X';
  int Degrees = 0;
  int Steps = 0;
  int Speed ;
  int GearRatio=5;
  int DelayConstant = 25;


  //define constants
   const int MinSpeed=1;
   const int MaxSpeed=100;
   const int MinDelay=25;
   const int MaxDelay=250;




