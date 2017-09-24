// Falah
#define TranslationDir 4 
#define TranslationStep 5
#define FrontSwitch A0
#define BackSwitch  A1

// Shady
#define RotationDir 6
#define RotationStep 7
#define RightSwitch A2
#define LeftSwitch A3

// Amin
#define SunDir 8
#define SunStep 9
#define SunLightPin 10
#define MoonLightPin 11
#define EastSwitch A4
#define WestSwitch A5

// Momen
#define RiverDir 12
#define RiverStep 13
#define RiverFrontSwitch 2
#define RiverBackSwitch 3

// GeneralDelays
#define StepLowDelay 10
#define ButtonDelay 250

//##################################################
// Sun Variables:
//###############
  int SunDelay = 100;         // changed with Speed
  int SunSpeed = 1;           // deg/sec
  int SunSteps = 0;           // Sun/Moon Position
  int SunBrightness = 125;    // 0 : 255 PWM
  int MoonBrightness = 0;     // 0 : 255 PWM


//##################################################
// Translation Variables:
//#######################

#define MinTranslationSpeed 1   // mm /sec
#define MaxTranslationSpeed 40  // mm /sec
#define Circumference 40        // mm
  int TranslationSpeed = 1;     // cm /sec
  int TranslationDelay = 100;   // changed with Speed
  int CameraDisplacement = 0;   // mm
  int TranslationSteps = 0;


//##################################################
// Rotation Variables:
//####################

#define MinRotationSpeed 1    // mm /sec
#define MaxRotationSpeed 40   // mm /sec
#define GearRatio = 4;    
  int RotationSpeed = 1;      // deg/sec
  int RotationDelay = 100;    // changed with Speed
  int CameraAngle = 0;    
  int RotationSteps = 0;      
  
//##################################################
// River Variables:
//#################

  int RiverSpeed = 1;         // mm/sec
  int RiverDelay = 100;       // changed with Speed

//##################################################
// General Variables:
//###################

#define BAUD_RATE 9600        // bps
char Command = 'X';


void setup() {
  Serial.begin(BAUD_RATE);
  
  pinMode(TranslationDir, OUTPUT);
  pinMode(TranslationStep, OUTPUT);
  pinMode(RotationDir, OUTPUT);
  pinMode(RotationStep, OUTPUT);
  pinMode(SunDir, OUTPUT);
  pinMode(SunStep, OUTPUT);
  pinMode(SunLightPin, OUTPUT);
  pinMode(MoonLightPin, OUTPUT);
  pinMode(RiverDir, OUTPUT);
  pinMode(RiverStep, OUTPUT);

  pinMode(FrontSwitch, INPUT_PULLUP);
  pinMode(BackSwitch, INPUT_PULLUP);
  pinMode(RightSwitch, INPUT_PULLUP);
  pinMode(LeftSwitch, INPUT_PULLUP);
  pinMode(EastSwitch, INPUT_PULLUP);
  pinMode(WestSwitch, INPUT_PULLUP);
  pinMode(RiverFrontSwitch, INPUT_PULLUP);
  pinMode(RiverBackSwitch, INPUT_PULLUP);
}

