//ID 54323
const byte BTNPIN = A0;
int counter = 0;

//Sets up pins, servo and serial monitor
void setup() {
  //make this pin an input pin
  pinMode(BTNPIN, INPUT);
  //set up serial ready for error messages
  Serial.begin(9600);
}

void loop() {
  //When the button is clicked do the following
  if (digitalRead(BTNPIN) == HIGH) {
    //update the counter by 1 and print in serial monitor
    counter++;

    switch (counter) {
      case 1:
        Serial.println("ouch");
        break;
      case 2:
        Serial.println("yow");
        break;
      case 3:
        Serial.println("uff");
        break;
      case 4:
        Serial.println("stop that");
        break;
      case 5:
        Serial.println("*dies*");
        counter = 0;
        break;
      default:
        Serial.println("ERROR YOU SHOULDN'T SEE THIS");
        break;
    }
    Serial.println(counter);
  }
  //delay 250milli to debounce
  delay(250);
}