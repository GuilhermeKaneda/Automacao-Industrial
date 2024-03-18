int vermelho = 3;
int amarelo = 4;
int verde = 5;
float time = 5;

void setup(){
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
}   


void loop(){
  while(time <= 5000) {
    digitalWrite(vermelho, HIGH);
    delay(time);
    digitalWrite(vermelho, LOW);

    digitalWrite(amarelo, HIGH);
    delay(time);
    digitalWrite(amarelo, LOW);

    digitalWrite(verde, HIGH);
    delay(time);
    digitalWrite(verde, LOW);
    time *= 1.15;
    Serial.println(time);
  }
}