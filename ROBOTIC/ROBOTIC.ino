
#include <Servo.h>

Servo ramie;
Servo ramie2;
Servo szczypce1;
Servo szczypce2;

// Pozycje obu ramion
int ramieDol = 0;
int ramieGora = 45;

// Pozycje szczypiec
int szczypceOtwarte = 0;
int szczypceZamkniete = 45;

void setup() {
  ramie.attach(3);
  ramie2.attach(5);

  szczypce1.attach(2);
  szczypce2.attach(4);

  // Pozycja początkowa
  ramie.write(ramieGora);
  ramie2.write(ramieGora);

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

  // 3. Ponownie zamknij szczypce
  szczypce1.write(szczypceZamkniete);
  szczypce2.write(szczypceZamkniete);
  delay(500);

  // 4. Otwórz szczypce
  szczypce1.write(szczypceOtwarte);
  szczypce2.write(szczypceOtwarte);
  delay(500);

  // 5. Opuść oba ramiona
  ramie.write(ramieDol);
  ramie2.write(ramieDol);
  delay(500);

  // 6. Zamknij oba szczypce
  szczypce1.write(szczypceZamkniete);
  szczypce2.write(szczypceZamkniete);
  delay(500);

  // 7. Podnieś oba ramiona
  ramie.write(ramieGora);
  ramie2.write(ramieGora);
  delay(500);
}
