void stp();
void fwd();
void left();
void right();
void back();
void setup()
{
    pinMode(4,OUTPUT);                  
    pinMode(5,OUTPUT);                  
    pinMode(6,OUTPUT);                  
    pinMode(7,OUTPUT); 
    pinMode(8,OUTPUT);                  
    pinMode(9,OUTPUT);                  
    pinMode(10,OUTPUT);                  
    pinMode(11,OUTPUT);                  
Serial.begin(9600);                                         // Baud rate set to 9600bps
}
void loop() {
    if(Serial.available() > 0)      // Ckeck for command Recieved
    {    
      char ch = Serial.read();
      Serial.println(ch);    
    if (ch == '1')     // Checking Command from User
    {
        fwd();
    }
    else if (ch == '2')
    {
back();
    }
    else if (ch == '3')
    {
       left();
    }
    else if (ch == '4')
    {
right();
    }
   else if (ch == '5')
  {
        stp();
  }
}
}                                           //loop() ends here
void fwd()          // Forward
{
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
void back()          // Backward
{
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void left()          //LEFT
{
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
void right()          // Right
{
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
      digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void stp()            // Robot STops
{
    digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
