const int numLeds = 10;

const int btnBetelgeuse = 22;
const int btnRigel = 24;
const int btnBellatrix = 26;
const int btnMintaka = 28;
const int btnAlnilam = 30;
const int btnAlnitak = 32;
const int btnSaiph = 34;
const int btnMeissa = 36;
const int btnNebula = 38;

const int btns[numLeds]={btnBetelgeuse, btnRigel, btnBellatrix, btnMintaka, btnAlnilam, btnAlnitak, btnSaiph, btnMeissa, btnNebula};

const int ledBetelgeuse = 21;
const int ledRigel = 23;
const int ledBellatrix = 25;
const int ledMintaka = 27;
const int ledAlnilam = 29;
const int ledAlnitak = 31;
const int ledSaiph = 33;
const int ledMeissa = 35;
const int ledNebula = LED_BUILTIN;

const int leds[numLeds]={ledBetelgeuse, ledRigel, ledBellatrix, ledMintaka, ledAlnilam, ledAlnitak, ledSaiph, ledMeissa, ledNebula};

bool ledState = 1;

void setup() {
  for (int button : btns) {
    pinMode(button, INPUT_PULLUP);
  }
  for (int led : leds) {
    pinMode(led, OUTPUT);
  }
}

void switchLed(int state, int position) {
  if (digitalRead(btns[position]) == LOW) {
    digitalWrite(leds[position], state);
  } else {
    digitalWrite(leds[position], HIGH);
  }
}

void loop() {
  ledState = !ledState;
  for (int i = 0; i < numLeds; i++) {
    switchLed(ledState, i);
  }
  delay(500);
}
