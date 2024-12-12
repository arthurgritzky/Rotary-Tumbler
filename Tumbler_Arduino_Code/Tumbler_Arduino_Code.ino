// Pin definitions for CNC Shield
#define X_STEP_PIN 2
#define X_DIR_PIN 5
#define Y_STEP_PIN 3
#define Y_DIR_PIN 6

#define STEP_DELAY 290 // Delay between steps in microseconds you might need to ajust this value

void setup() {
  pinMode(X_STEP_PIN, OUTPUT);
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(Y_STEP_PIN, OUTPUT);
  pinMode(Y_DIR_PIN, OUTPUT);
  digitalWrite(X_DIR_PIN, LOW);
  digitalWrite(Y_DIR_PIN, LOW);
}

void loop() {


    digitalWrite(X_DIR_PIN, false);  //change true to false if a motor drives in the wrong direction
    digitalWrite(Y_DIR_PIN, false);
    digitalWrite(X_STEP_PIN, HIGH);
    digitalWrite(Y_STEP_PIN, HIGH);
    delayMicroseconds(STEP_DELAY);
    digitalWrite(X_STEP_PIN, LOW);
    digitalWrite(Y_STEP_PIN, LOW);
    delayMicroseconds(STEP_DELAY);

}


