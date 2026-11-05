#include <Servo.h>

Servo ramie;
Servo szczypce;

int ramieGora = 45;
int ramieDol = 0;

int szczypceOtwarte = 0;
int szczypceZamkniete = 45;

void setup() {
  ramie.attach(3);
  szczypce.attach(2);

  ramie.write(ramieGora);
  szczypce.write(szczypceOtwarte);

  delay(2000);
}

void loop() {
  ramie.write(ramieDol);
  delay(1000);

  szczypce.write(szczypceZamkniete);
  delay(1000);

  ramie.write(ramieGora);
  delay(1000);

  szczypce.write(szczypceOtwarte);
  delay(2000);
}
