int seg_a = 3;
int seg_b = 4;
int seg_c = 5;
int seg_d = 6;
int seg_e = 7;
int seg_f = 8;
int seg_g = 9;
int bot = 2;
bool test = 0;
bool m = 0;
int i = 0;

void setup() {
  pinMode(seg_a, OUTPUT);
  pinMode(seg_b, OUTPUT);
  pinMode(seg_c, OUTPUT);
  pinMode(seg_d, OUTPUT);
  pinMode(seg_e, OUTPUT);
  pinMode(seg_f, OUTPUT);
  pinMode(seg_g, OUTPUT);
}

void loop() {
  
    while(true) {
        while(true) {
            if (digitalRead(bot) == 1) {
            test = 1;
            }
            if (digitalRead(bot) == 0 && test == 1) {
                break;
            }
        }
        switch (i) {
        case 0:
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, HIGH);
            digitalWrite(seg_f, HIGH);
            digitalWrite(seg_g, LOW);
            break;

        case 1: 
            digitalWrite(seg_a, LOW);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, LOW);
            digitalWrite(seg_e, LOW);
            digitalWrite(seg_f, LOW);
            digitalWrite(seg_g, LOW);
            break;

        case 2: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, LOW);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, HIGH);
            digitalWrite(seg_f, LOW);
            digitalWrite(seg_g, HIGH);
            break;

        case 3: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, LOW);
            digitalWrite(seg_f, LOW);
            digitalWrite(seg_g, HIGH);
            break;

        case 4:
            digitalWrite(seg_a, LOW);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, LOW);
            digitalWrite(seg_e, LOW);
            digitalWrite(seg_f, HIGH);
            digitalWrite(seg_g, HIGH);
            break;

        case 5: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, LOW);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, LOW);
            digitalWrite(seg_f, HIGH);
            digitalWrite(seg_g, HIGH);
            break;

        case 6: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, LOW);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, HIGH);
            digitalWrite(seg_f, HIGH);
            digitalWrite(seg_g, HIGH);
            break;

        case 7: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, LOW);
            digitalWrite(seg_e, LOW);
            digitalWrite(seg_f, LOW);
            digitalWrite(seg_g, LOW);
            break;

        case 8: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, HIGH);
            digitalWrite(seg_f, HIGH);
            digitalWrite(seg_g, HIGH);
            break;

        case 9: 
            digitalWrite(seg_a, HIGH);
            digitalWrite(seg_b, HIGH);
            digitalWrite(seg_c, HIGH);
            digitalWrite(seg_d, HIGH);
            digitalWrite(seg_e, LOW);
            digitalWrite(seg_f, HIGH);
            digitalWrite(seg_g, HIGH);
            break;
        }
        test = 0;

        if(m == 0) {
            i++;

            if(i > 9) {
                m = 1;
              	i = 9;
            }
        }
        if(m == 1) {
            i--;

            if(i < 0) {
                m = 0;
                i = 1;
            }
        }
    }
}