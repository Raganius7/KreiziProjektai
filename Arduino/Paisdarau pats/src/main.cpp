#include <Arduino.h>

int num1 = 0;
int num2 = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; //wait for serial port to connect
}
Serial.println("ivesk pirma skaiciu");
}

void loop() {
  //paziureti ar pirma skaiciu perskaite
  if (Serial.available() > 0) {
    num1 = Serial.parseInt(); //Skaito pirmaji skaiciu SVEIKA
    Serial.println("iveskite antra numeri:");

    //lauktiantro numerio
    while (Serial.available() ==0) {
      // laukti kol antras bus laisvas
    }
    num2 = Serial.parseInt(); // Skaito antra skaiciu SVEIKA

    //skaiciuoti ir parodyti rezultata
    int result = num1 * num2;
    Serial.print("Resultatas: ");
    Serial.println(result);
    //prasyti vel
    Serial.println("\nIvesti pirma skaiciu:");
  }
}


