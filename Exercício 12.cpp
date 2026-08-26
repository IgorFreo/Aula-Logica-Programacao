#include <stdio.h> // Biblioteca

int main() {
    float temperatura; // Guarda a temperatura informada
    
    // WHILE: mantém o monitoramento acontecendo continuamente e O 1 faz o laço continuar até que um BREAK seja executado
    while (1) {

        // Pede a temperatura atual do sensor
        printf("Digite a temperatura do sensor ou digite (999 para desligar): ");
        scanf("%f", &temperatura);

        // IF: verifica se o técnico digitou o código de emergência
        if (temperatura == 999) {
            printf("O Desligamento de emergencia acionado.\n");

            // BREAK: interrompe o WHILE e encerra o monitoramento
            break;

        // ELSE IF: verifica se a temperatura passou de 100 graus
        } else if (temperatura > 100) {
            printf("ALERTA! Isso é uma Temperatura critica de superaquecimento!\n");

        // ELSE: executa quando a temperatura está dentro do limite
        } else {
            printf("Temperatura normal: %.1f C\n", temperatura);
        }
    }

    return 0; // Finaliza o programa
}
