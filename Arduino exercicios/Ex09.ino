int led = 3;
int bot1 = 6;
int bot2 = 4;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  digitalWrite(led, LOW);
}   


void loop(){
  while(digitalRead(bot1) == 1 && digitalRead(bot2) == 1) {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }

  if(digitalRead(bot1) == 1) {
    digitalWrite(led, HIGH);
  }

  if(digitalRead(bot2) == 1) {
    digitalWrite(led, LOW);
  }
}