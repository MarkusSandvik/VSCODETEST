# 1 "C:\\Users\\marku\\OneDrive\\Dokumenter\\BIELSYS - Elektronisk Systemingeniør\\INGT1002\\VSCODETEST\\.vscode\\arduinoSimpleTest\\arduinoSimpleTest.ino"
// C++ code
//
void setup()
{
  pinMode(13, 0x1);
}

void loop()
{
  digitalWrite(13, 0x1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, 0x0);
  delay(1000); // Wait for 1000 millisecond(s)
}
