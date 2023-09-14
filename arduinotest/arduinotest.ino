// C++ code
//
int buttonPin = 8;
int lastButtonState = 0;

void setup(){

    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
} // end void

void loop(){
    /*
    int buttonRead = digitalRead(buttonPin);
    int buttonState = !buttonRead;

    if (buttonState != lastButtonState){
        if (buttonState == HIGH){
            digitalWrite(LED_BUILTIN, HIGH);
        } // end if
        else{
            digitalWrite(LED_BUILTIN,LOW);
        } // end else
        
        lastButtonState = buttonState;
    } // end void
    */
    
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
}