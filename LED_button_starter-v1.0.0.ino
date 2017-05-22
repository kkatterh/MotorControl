
// constants won't change. They're used here to
// set pin numbers:
const int button1 = 2;     // the number of the pushbutton pin
const int button2 = 3;
const int button3 = 4;
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int button1state = 1;         // variable for reading the pushbutton status
int button2state = 1;
int button3state = 1;

// variable for a button down
int buttonpress = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the button pins as an inputs:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  // initialize the Serial
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  button1state = digitalRead(button1);
  button2state = digitalRead(button2);
  button3state = digitalRead(button3);

  //button press variable reset to zero
  buttonpress = 0;

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (button1state == HIGH) {
    // turn LED on:
    analogWrite(ledPin, 250);
    Serial.println("HIGH");
    buttonpress ++;
  } 
  if (button2state == HIGH) {
    //turn LED on at 175
    analogWrite(ledPin, 175);
    Serial.println("175 YO");
    buttonpress ++;
  }
  if (buttonpress == 0) {
    // turn LED off:
    analogWrite(ledPin, 0);
    Serial.println("LOW");
  }
  
}
