#include <stdio.h> // Biblioteca

int main() {
    int numeroSecreto = 15; // Número que o usuário precisa descobrir
    int tentativa; // Guarda o número digitado pelo usuário

    printf("=== JOGO DE ADIVINHACAO DUVIDO VC ACERTAR ===\n");

    // WHILE: repete o jogo enquanto a condição for verdadeira O 1 faz o programa continuar até o BREAK ser executado
    while (1) {

        // Pede uma tentativa ao usuário
        printf("Tente acertar! Digite um numero: ");
        scanf("%d", &tentativa);

        // IF: verifica se a tentativa é igual ao número secreto
        if (tentativa == numeroSecreto) {
            printf("Que cagada em! Voce acertou o numero secreto, roubou certeza!\n");

        // BREAK: interrompe o WHILE e encerra o jogo
            break;

        // ELSE IF: verifica se a tentativa é menor que o número secreto
        } else if (tentativa < numeroSecreto) {
            printf("O numero secreto e maior que sua tentativa.\n");

        // ELSE: executa quando a tentativa não é igual nem menor Portanto, nesse caso, ela é maior que o número secreto
        } else {
            printf("O numero secreto e menor que sua tentativa.\n");
        }
    }

    return 0; // Fim do programa
}
