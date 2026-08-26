#include <stdio.h> // Biblioteca

int main() {
    int numerador; // Guarda o numerador da divisão
    int denominador; // Guarda o denominador da divisão

    // WHILE: repete o programa enquanto a condição for verdadeira e O 1 faz o laço continuar até que um BREAK seja executado
    while (1) {

        // Pede o numerador ao usuário
        printf("\nDigite o numerador (999 para sair): ");
        scanf("%d", &numerador);

        // IF: verifica se o usuário digitou o comando de saída
        if (numerador == 999) {
            printf("Calculadora encerrada.\n");

            // BREAK: interrompe o WHILE e encerra o programa
            break;
        }

        // Pede o denominador ao usuário
        printf("Digite o denominador: ");
        scanf("%d", &denominador);

        // IF: verifica se o denominador é zero
        if (denominador == 0) {
            printf("Erro! Nao e possivel dividir por zero.\n");

        // ELSE: executa quando o denominador não é zero
        } else {
            printf("Resultado: %.2f\n",
                   (float)numerador / denominador);
        }
    }

    return 0; // Finaliza o programa
}
