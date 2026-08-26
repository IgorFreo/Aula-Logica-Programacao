#include <stdio.h> // Biblioteca

int main() {
    int numeroSecreto = 99; // Número que o jogador precisa adivinhar
    int tentativa; // Guarda a tentativa
    
    // DO-WHILE: executa o código pelo menos uma vez e depois repete enquanto a condição do WHILE for verdadeira
    do {
        printf("\nDigite um numero ou digite (0 para desistir) certeza que vai ter que digitar 0 kkkk: ");
        scanf("%d", &tentativa);

        // IF: verifica se o jogador escolheu desistir
        if (tentativa == 0) {
            printf("Voce desistiu do jogo né kkkk SABIA!.\n");

            // BREAK: interrompe o DO-WHILE imediatamente
            break;

        // ELSE IF: verifica se a tentativa esta correta
        } else if (tentativa == numeroSecreto) {
            printf("Parabens! Voce acertou o numero secreto, CAGADA CERTEZAAAA!\n");

            // BREAK: encerra o jogo porque o jogador acertou
            break;

        // ELSE IF: verifica se a tentativa e menor que o numero secreto
        } else if (tentativa < numeroSecreto) {
            printf("O numero secreto e maior que sua tentativa.\n");

        // ELSE: executa quando a tentativa e maior que o numero secreto
        } else {
            printf("O numero secreto e menor que sua tentativa.\n");
        }

    // WHILE: repete o jogo enquanto a tentativa nao for 0
    } while (tentativa != 0);

    return 0; // Fim do programa
}
