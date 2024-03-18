int led = 4;
int bot = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(bot, INPUT);
  digitalWrite(led, LOW);
}

void loop() {
  
  if (digitalRead(bot) == 1) {
    digitalWrite(led, HIGH); 
  } else {
    delay(500);
    digitalWrite(led, LOW);
  }
}