// Arah Utara
const int utaraR = 15;
const int utaraY = 2;
const int utaraG = 0;

// Arah Timur
const int timurR = 4;
const int timurY = 16;
const int timurG = 17;

// Arah Selatan
const int selatanR = 5;
const int selatanY = 18;
const int selatanG = 19;

// Arah Barat
const int baratR = 21;
const int baratY = 22;
const int baratG = 23;

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