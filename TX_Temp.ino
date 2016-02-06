//For use with TMP36 temperature sensor

int probe = A1;
int power = A0;
int ground = A2;

double voltage = 0;
double celsius = 0;
double fahrenheit = 0;

void setup(){  
    Serial.begin( 9600 );  
    pinMode( probe, INPUT );  
    pinMode( power, OUTPUT );  
    pinMode( ground, OUTPUT );  
    digitalWrite( power, HIGH );  
    digitalWrite( ground, LOW );
}

void loop(){  
    voltage = 5 * ( analogRead( probe ) / 1024.0 );  
    celsius = ( voltage -.5 ) * 100;  
    fahrenheit = celsius * ( 9 / 5.0 ) + 32;  
    Serial.println( fahrenheit );  
    //delay( 1000 );
}

