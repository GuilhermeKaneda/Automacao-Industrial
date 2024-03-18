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
  if(digitalRead(bot1) == 1 || digitalRead(bot2) == 1) {
    digitalWrite(led, HIGH);
  }

  while(digitalRead(bot1) == 1 && digitalRead(bot2) == 1) {
    digitalWrite(led, LOW);
  }
}