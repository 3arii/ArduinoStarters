
/*
 * The lame ask name program
 * every coding language has
 */

String LEDColor;
String message = "Which Color of the LED do you want to light up? ";
String errorMessage = "Input not recognized, please only enter \"red\", \"blue\" or \"green\".";

int redLED = 6;
int blueLED = 9;
int greenLED = 12;

int delayTime = 500;


void setup() {

  Serial.begin ( 9600 );

  pinMode ( redLED, OUTPUT );
  pinMode ( blueLED, OUTPUT );
  pinMode ( greenLED, OUTPUT );
  
}

void loop() {

  Serial.println ( message );

  while ( Serial.available() == 0 ) {}
  LEDColor = Serial.readString();
  LEDColor.toLowerCase();

  Serial.println ( LEDColor );

  if ( LEDColor == "red" ) {

    turnOnLED ( redLED );
    
  }

  else if ( LEDColor == "blue" ) {

    turnOnLED ( blueLED );
    
  }

  else if ( LEDColor == "green" ) {

    turnOnLED ( greenLED );
    
  }

  else {

    Serial.println ( errorMessage );
    
  }

  
}

void turnOnLED ( int LEDcolor ) {

  digitalWrite ( redLED, LOW );
  digitalWrite ( blueLED, LOW );
  digitalWrite ( greenLED, LOW );

  digitalWrite ( LEDcolor, HIGH );
  
}
