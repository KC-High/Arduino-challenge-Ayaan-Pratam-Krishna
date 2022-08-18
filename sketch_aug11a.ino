int swt = 4;
int led = 12;
void setup()
{
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  
    if(digitalRead(swt) == 1)
    {
      digitalWrite(led, HIGH);
    }
  else{
       digitalWrite(led, LOW);
  }
    
} 
