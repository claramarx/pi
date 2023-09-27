#Na hora de ler o botão você poderia fazer o que chamamos de debounce, ou seja, ao ler que o botão foi pressionado, esperamos um tempo (20 milisegundos, por exemplo) e depois conferimos se ele realmente está apertado ou se não está. Se ele não estiver, provavelmente foi só uma flutuação do sensor. Se ele estiver, pode aumentar ou diminuir a velocidade.

int getDigitalReading(int port) {

    if (digitalRead(port) == HIGH) {

        delay(20);

        if (digitalRead(port) == HIGH) {

            return HIGH;

        }

    }

    return LOW;

}

#Depois de conferir o debounce, você faz a leitura do botão aumentando a velocidade. Mas lembra de colocar um delay pra não aumentar ou diminuir instantaneamente a velocidade e uma checagem de mínimo e máximo de velocidade.

int velocidade = 0;

void loop() {

    if (getDigitalReading(port_mais) == HIGH) {

        if (velocidade <= 240) {

            velocidade += 10;

            delay(400);

        }

    }

    if (getDigitalReading(port_menos) == HIGH) {

        if (velocidade >= 10)

            velocidade -= 10;

            delay(400);

        }

    }

    moverMotores(velocidade);

}