#include <Servo.h>

Servo ramie;
Servo szczypce1;
Servo szczypce2;

// Pozycje ramienia
//int ramie60 = 60;
//int ramie30 = 40;
//int ramie20 = 10;
int ramieDol = 0;
int ramieGora = 45;

// Pozycje szczypiec
int szczypceOtwarte = 0;
int szczypceZamkniete = 45;

void setup() {
  ramie.attach(3);
  szczypce1.attach(2);
  szczypce2.attach(4);

  // Pozycja początkowa
  ramie.write(ramieGora);
  szczypce1.write(szczypceOtwarte);
  szczypce2.write(szczypceOtwarte);

  delay(1000);
}

void loop() {

  // 1. Zamknij oba szczypce
  szczypce1.write(szczypceZamkniete);
  szczypce2.write(szczypceZamkniete);
  delay(500);

  // 2. Otwórz oba szczypce
  szczypce1.write(szczypceOtwarte);
  szczypce2.write(szczypceOtwarte);
  delay(500);

  // 3. Ponownie zamknij oba szczypce
  szczypce1.write(szczypceZamkniete);
  szczypce2.write(szczypceZamkniete);
  delay(500);

  // 4. Otwórz oba szczypce
  szczypce1.write(szczypceOtwarte);
  szczypce2.write(szczypceOtwarte);
  delay(500);

  // 5. Opuść ramię
  ramie.write(ramieDol);
  delay(500);

  // 7. Zamknij oba szczypce
  szczypce1.write(szczypceZamkniete);
  szczypce2.write(szczypceZamkniete);
  delay(500);

  // 9. Opuść ramię
  ramie.write(ramieGora);
  delay(500);
}
