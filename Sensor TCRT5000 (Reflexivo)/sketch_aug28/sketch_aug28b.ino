int objeto = 0;

void setup() {
  pinMode(7, INPUT); //Pino ligado ao coletor de fototransistor
  Serial.begin(9600);
}

void loop() {
  objeto = digitalRead(7);
  if (objeto == 0)
  {
    Serial.println("Objeto : Detectado");
  }
  else
  {
    Serial.println("Objeto : Ausente");
    //delay(1000);
  }
}
