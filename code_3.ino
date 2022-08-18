const int ledPin = 4;
  const int led2Pin = 5;
 
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin  , OUTPUT );
pinMode(led2Pin , OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led2Pin, HIGH);
delay(2000);
digitalWrite(led2Pin, LOW);
delay(2000);

digitalWrite(ledPin, HIGH);
delay(2000);
digitalWrite(ledPin, LOW);
delay(2000);

digitalWrite(led2Pin, HIGH);
delay(2000);
digitalWrite(led2Pin, LOW);
delay(2000);

digitalWrite(ledPin, HIGH);
delay(2000);
digitalWrite(ledPin, LOW);
delay(2000);

}
