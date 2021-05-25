
/*
 * Reading potans val and making the 
 * LED to things experiment
 */

int userNumber;
int redLED = 6;

int i;
int delayTime = 500;

String message = "How many times do you want the LED to blink: ";
String initialMessage = "The LED will blink this many times: ";
String LEDBlinkReminder = "The LED has blinked this many times: ";


void setup() {

  Serial.begin ( 9600 );
  pinMode ( redLED, OUTPUT );
  
}

void loop() {

  Serial.println ( message );

  while ( Serial.available() == 0 ) {}
  userNumber = Serial.parseInt();

  Serial.println ( "\n" + initialMessage + userNumber + "\n" );

  for ( int i = 1; i <= userNumber; i++ ) {

    digitalWrite ( redLED, HIGH );
    delay ( delayTime );
    digitalWrite ( redLED, LOW );
    delay ( delayTime );

    Serial.println ( LEDBlinkReminder + i );

    
  }

  digitalWrite ( redLED, LOW );

} 
