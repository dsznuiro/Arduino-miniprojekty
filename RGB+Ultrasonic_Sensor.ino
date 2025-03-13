//Sloty na sensor ultradzwiekow
const int trigPin = 9;
const int echoPin = 10;
//Sloty na diody
int redPin= 5;
int greenPin = 6;
int  bluePin = 7;

int R = 255;
int G = 225;
int B = 225;
int maxDistance = 50;

// Tworzy funkcje setColor która pozwala ustalac wartosci red green i blue do max 255
void setColor(int redValue, int greenValue,  int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin,  greenValue);
  analogWrite(bluePin, blueValue);
} 

//W funkcji setup czyli takiej ktora jest wykonywana tylko raz
//ustawiamy wartosc pinow na output czyli takie ktore sa sterowane przez ARDUINO
//echoPin jest jako input bo od niego bedziemy pobierac dlugosc fali
void setup() {
  pinMode(redPin,  OUTPUT);              
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //iniscjuje komunikacje z komputerem przez port szeregowy przez co mozemy odczytywac wyniki z komputera
  Serial.begin(9600);
}

float duration, distance;

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);

int maxDistance = 30;
int scaledValue = (distance * 255) / maxDistance;
scaledValue = std::min(255, std::max(0, scaledValue)); // Ograniczenie do 0-255

int R = 0, G = 0, B = 0;

if (scaledValue < 85) {
    // Czerwony → Żółty (więcej czerwonego na początku)
    R = 255;
    G = (scaledValue * 3);
    B = 0;
} else if (scaledValue < 170) {
    // Żółty → Zielony → Turkus
    R = 255 - ((scaledValue - 85) * 3);
    G = 255;
    B = (scaledValue - 85) * 3;
} else {
    // Turkus → Niebieski
    R = 0;
    G = 255 - ((scaledValue - 170) * 3);
    B = 255;
}

// Ustawienie koloru
setColor(R, G, B);

}

