void setup()
{
    // set up output pins
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    
    // blink green LED on and off twice
        digitalWrite(8, HIGH);
        delay(500);
        digitalWrite(8, LOW);
        delay(500);
        
        digitalWrite(8, HIGH);
        delay(500);
        digitalWrite(8, LOW);
        delay(500);
    
    // wait one second
    delay (1000);
    
    // blink blue LED on and off twice
        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(7, LOW);
        delay(1000); 
        
        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(7, LOW);
        delay(1000); 
        
        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(7, LOW);
        delay(1000); 
        
      
    
    // wait three seconds
    delay (2000);
}

void loop()
{
    // blink blue LED on and off twice
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        delay(500);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        delay(200); 
       
    
}
