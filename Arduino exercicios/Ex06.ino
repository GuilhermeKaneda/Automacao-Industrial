int vermelho = 3;
int amarelo = 4;
int verde = 5;
int bot = 2;
bool test1 = 0;

void setup(){
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(bot, INPUT);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
}   

void loop(){
  for(int i = 0; i < 3; i++) {
    while(true) {
      if(digitalRead(bot) == 1) {
            test1 = 1;
        }
      if(digitalRead(bot) == 0 && test1 == 1) {
        test1 = 0;
        break;
      }
    }
    switch (i) {
      case 0:
        digitalWrite(verde, LOW);
        digitalWrite(vermelho, HIGH);
        break;

      case 1:
        digitalWrite(vermelho, LOW);
        digitalWrite(amarelo, HIGH);
        break;

      case 2:
        digitalWrite(amarelo, LOW);
        digitalWrite(verde, HIGH);
        break;
    }
  }
}