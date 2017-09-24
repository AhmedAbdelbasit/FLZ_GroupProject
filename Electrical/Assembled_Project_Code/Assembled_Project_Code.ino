#define TranslationDir 4 
#define TranslationStep 5
#define RotationDir 6
#define RotationStep 7
#define SunDir 8
#define SunStep 9
#define SunLight 10
#define MoonLight 11
#define RiverDir 12
#define RiverStep 13

#define FrontSwitch A0
#define BackSwitch  A1
#define RightSwitch A2
#define LeftSwitch A3
#define EastSwitch A4
#define WestSwitch A5
#define RiverFrontSwitch 2
#define RiverBackSwitch 3

#define StepLowDelay 10
#define ButtonDelay 250

int TranslationDelay = 100; // changed with Speed
int RotationDelay = 100;    // changed with Speed
int RiverDelay = 100;       // changed with Speed
int SunDelay = 100;         // changed with Speed

int TranslationSpeed = 1;   // cm /sec
int RotationSpeed = 1;      // deg/sec
int RiverSpeed = 1;         // cm /sec
int SunSpeed = 1;           // deg/sec

int SunBrightness = 125;    // 0 : 255 PWM
int MoonBrightness = 0;     // 0 : 255 PWM

void setup() {
  // put your setup code here, to run once:
  pinMode(TranslationDir, OUTPUT);
  pinMode(TranslationStep, OUTPUT);
  pinMode(RotationDir, OUTPUT);
  pinMode(RotationStep, OUTPUT);
  pinMode(SunDir, OUTPUT);
  pinMode(SunStep, OUTPUT);
  pinMode(SunLight, OUTPUT);
  pinMode(MoonLight, OUTPUT);
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

