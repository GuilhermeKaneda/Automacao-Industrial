int led = 4;
int bot = 6;
float freq;
int count = 0;
bool test1 = 0;
bool test2 = 0;
unsigned long time1 = 0;
unsigned long time2 = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(bot, INPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);
  Serial.println("Aperte o botao");
}

void loop() {
  if(digitalRead(bot) == 1) {
    test1 = 1;
  }
  if(digitalRead(bot) == 0 && test1 == 1) {
    count++;
    test1 = 0;
    Serial.println(String(count) + " cliques");
  }

  freq = 500 / count;

  if(count > 0) {
    time1 = millis();
    if((time1 - time2) >= freq && test2 == 0) {
      digitalWrite(led, HIGH);
      test2 = 1;
      time2 = time1;
    }
    if((time1 - time2) >= freq) {
      digitalWrite(led, LOW);
      test2 = 0;
      time2 = time1;
    }
  }
}