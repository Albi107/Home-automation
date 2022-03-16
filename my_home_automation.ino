
//---------------------------------------------------------------------
//  Program:      Remote switch
//
//  Description:  Switches on appliances when remote is pressed.
//         
//  Date:          6 April 2016      Author: Albright Edet
//                
//---------------------------------------------------------------------
int val;int val1;int val2;int val3; int play = 2;
int remote1 = 3;int remote2 = 4;int remote3 = 5;int remote4 = 6;
int relay1 = 7; int relay2 = 8; int relay3 = 10; int relay4 = 11; 
static bool led_state = false;  // current state of bulb

void setup() 
{
  Serial.begin(9600);             // using serial port to check digital value
  pinMode(relay1, OUTPUT);
  pinMode(remote1,INPUT);
  pinMode(relay2, OUTPUT);
  pinMode(remote2,INPUT);
  pinMode(relay3, OUTPUT);
  pinMode(remote3,INPUT);
  pinMode(relay4, OUTPUT);
  pinMode(remote4,INPUT);// bulb on pin 6
  pinMode(play, OUTPUT);
}

void loop() 
{

val = digitalRead(remote1);
val1 = digitalRead(remote2);
val2 = digitalRead(remote3);
val3 = digitalRead(remote4);
delay(50);

  if (val == HIGH) // trigger threshold
  {  delay(50);        
    
   { if (led_state) // toggle LED
    {
      led_state = false;          // LED was on, now off
      digitalWrite(7,HIGH);
    }
    else 
    {
      led_state = true;
      digitalWrite(7,LOW);      // LED was off, now on
      
     }}
     
    delay(100);
     }
     if (val1 == HIGH) // trigger threshold
  {   delay(50);        
    
   { if (led_state) // toggle LED
    {
      led_state = false;          // LED was on, now off
      digitalWrite(8,HIGH);
       }
    else 
    {
      led_state = true;
      digitalWrite(8,LOW);      // LED was off, now on
      
      }}
    delay(100);
  
    }
     if (val2 == HIGH) // trigger threshold
  {          
    
   { if (led_state) // toggle LED
    { delay(50);
      led_state = false;          // LED was on, now off
      digitalWrite(10,HIGH);
       }
    else 
    {
      led_state = true;
      digitalWrite(10,LOW);      // LED was off, now on
      
                }}
    delay(100);
   
    }
     if (val3 == HIGH) // trigger threshold
  {          
    
   { if (led_state) // toggle LED
    { delay(50);
      led_state = false;          // LED was on, now off
      digitalWrite(11,HIGH);
    
    }
    else 
    {
      led_state = true;
      digitalWrite(11,LOW);      // LED was off, now on
      
                }}
    delay(100);
    
    }
    }
    
  
