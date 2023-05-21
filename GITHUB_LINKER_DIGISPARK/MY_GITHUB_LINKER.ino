#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0); //this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay
  delay(2000);
  DigiKeyboard.delay(2000); // delay for 2 seconds before starting
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); // press Windows key
  DigiKeyboard.delay(1000); // delay for 1 second
  DigiKeyboard.print("https://github.com/oualiid"); // type "chrome" to search for Google Chrome
  DigiKeyboard.delay(1000); // delay for 1 second
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // press Enter key to open Google Chrome
  DigiKeyboard.delay(5000); // delay for 5 seconds
  DigiKeyboard.print("https://github.com/oualiid"); // type the URL for your GitHub account
  DigiKeyboard.delay(1000); // delay for 1 second
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // press Enter key to open your GitHub account
}


 void loop () {
  // no loop needed for this script
}