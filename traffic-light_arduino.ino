// Arah Utara
const int utaraR = 2;
const int utaraY = 3;
const int utaraG = 4;

// Arah Timur
const int timurR = 8;
const int timurY = 9;
const int timurG = 10;

// Arah Selatan
const int selatanR = 11;
const int selatanY = 12;
const int selatanG = 13;

// Arah Barat
const int baratR = 5;
const int baratY = 6;
const int baratG = 7;

void setup() {
  int pins[] = {utaraR, utaraY, utaraG, timurR, timurY, timurG, 
                selatanR, selatanY, selatanG, baratR, baratY, baratG};
  
  for (int i = 0; i < 12; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW); 
  }

  digitalWrite(utaraR, HIGH);
  digitalWrite(timurR, HIGH);
  digitalWrite(selatanR, HIGH);
  digitalWrite(baratR, HIGH);
}

void loop() {
  
  aktifkanSimpang(utaraR, utaraY, utaraG);    
  aktifkanSimpang(timurR, timurY, timurG);    
  aktifkanSimpang(selatanR, selatanY, selatanG); 
  aktifkanSimpang(baratR, baratY, baratG);    
}

void aktifkanSimpang(int pinMerah, int pinKuning, int pinHijau) {
  digitalWrite(pinMerah, LOW);
  
  digitalWrite(pinHijau, HIGH);
  delay(5000); 
  digitalWrite(pinHijau, LOW);

  for(int i = 0; i < 3; i++) {
    digitalWrite(pinKuning, HIGH);
    delay(333);
    digitalWrite(pinKuning, LOW);
    delay(333);
  }

  digitalWrite(pinMerah, HIGH);
}