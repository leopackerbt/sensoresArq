#include <dht.h>
dht DHT;
uint32_t timer = 0;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
  // executa 1 vez a cada 2 segundos / 2000 ms
  if(millis() - timer>= 2000)
  {

    DHT.read11(A1); // chama metodo de leitura da classe dht,
                   // com o pino de transmissao de dados ligado no pino A1
    // Exibe na serial o valo da umidade
    Serial.print(DHT.humidity);
    Serial.println(" %");

    // Exibe na serial o valor da temperatura
    Serial.print(DHT.temperature);
    Serial.println(" Celsius");

    timer = millis(); //Atualiza a referência
    delay(1000);
  }
}
