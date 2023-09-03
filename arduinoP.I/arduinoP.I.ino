const int sensorPin = A0; // Pino analógico onde o sensor de umidade do solo está conectado
const int bombaPin = 2;   // Pino onde o relé da bomba de água está conectado

int umidadeLimite = 500; // Limite de umidade, ajuste conforme necessário

void setup() {
  pinMode(bombaPin, OUTPUT); // Configura o pino da bomba como saída
  digitalWrite(bombaPin, LOW); // Desliga a bomba no início
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  int umidadeSolo = analogRead(sensorPin); // Lê a umidade do solo

  Serial.print("Umidade do Solo: ");
  Serial.println(umidadeSolo);

  if (umidadeSolo < umidadeLimite) {
    Serial.println("Solo seco. Ligando a bomba.");
    digitalWrite(bombaPin, HIGH); // Liga a bomba
    delay(5000); // Liga a bomba por 5 segundos (ajuste conforme necessário)
    digitalWrite(bombaPin, LOW); // Desliga a bomba
    Serial.println("Bomba desligada.");
  } else {
    Serial.println("Solo úmido. Nenhuma ação necessária.");
  }

  delay(60000); // Aguarda 1 minuto antes de verificar novamente (ajuste conforme necessário)
}
