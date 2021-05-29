#include <Keypad.h>

#define LED1 14 //D13
#define LED2 12 //D15
#define LED3 25 //D25
#define LED4 32 //D05
#define LED5 33 //D23

enum TECLADO
{
  PRIMEIRO,
  SEGUNDO,
  TERCEIRO,
  QUARTO
};

TECLADO tecladoAtual = PRIMEIRO;

struct Led
{
  const uint8_t PIN;
  bool pressed;
};

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns

char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

byte rowPins[ROWS] = {15, 4, 5, 18};
byte colPins[COLS] = {19, 21, 22, 13};

Keypad kpd = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

unsigned long loopCount;

unsigned long startTime;

String msg;

void setup()
{

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  digitalWrite(LED1, HIGH);

  Serial.begin(9600);
  loopCount = 0;
  startTime = millis();
  msg = "";
}

void loop()
{
  // Fills kpd.key[ ] array with up-to 10 active keys.
  // Returns true if there are ANY active keys.
  if (kpd.getKeys())
  {
    for (int i = 0; i < LIST_MAX; i++) // Scan the whole key list.
    {
      if (kpd.key[i].stateChanged) // Only find keys that have changed state.
      {
        switch (kpd.key[i].kstate)
        { // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
        case PRESSED:
        {
          msg = " PRESSED.";
          sendCommand(kpd.key[i].kchar);
        }
        break;
        case HOLD:
          msg = " HOLD.";

          if (kpd.key[i].kchar == 'A')
          {
            SetLed(PRIMEIRO);
            break;
          }
          else if (kpd.key[i].kchar == 'B')
          {
            SetLed(SEGUNDO);
            break;
          }
          else if (kpd.key[i].kchar == 'C')
          {
            SetLed(TERCEIRO);
            break;
          }
          else if (kpd.key[i].kchar == 'D')
          {
            SetLed(QUARTO);
            break;
          }

          break;
        case RELEASED:
          msg = " RELEASED.";
          break;
        case IDLE:
          msg = " IDLE.";
        }
        Serial.print("Key ");
        Serial.print(kpd.key[i].kchar);
        Serial.println(msg);
      }
    }
  }
} // End loop
