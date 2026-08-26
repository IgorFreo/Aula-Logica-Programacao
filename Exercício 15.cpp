#include <stdio.h> // Biblioteca

int main() {
    int numero; // Guarda o número digitado pelo usuário
    int total = 0; // Guarda a soma dos números positivos

    // DO-WHILE: executa o código pelo menos uma vez e depois repete enquanto a condição do WHILE for verdadeira
    do {
        printf("Digite um numero ou digitw (0 para encerrar): ");
        scanf("%d", &numero);

        // IF: verifica se o número digitado é 0
        if (numero == 0) {
            printf("Se Programa foi encerrado.\n");

            // BREAK: interrompe o DO-WHILE imediatamente
            break;

        // ELSE: executa quando o número não é 0
        } else {

            // IF: verifica se o número é positivo
            if (numero > 0) {
                total = total + numero;

                printf("Esse Numero positivo adicionado.\n");

            // ELSE: executa quando o número é negativo
            } else {
                printf("Numero negativo foi ignorado.\n");
            }
        }

    // WHILE: mantém o programa repetindo enquanto o número não for 0
    } while (numero != 0);

    // Mostra o total depois que o BREAK encerra o programa
    printf("Total dos numeros positivos: %d\n", total);

    return 0; // Fim do programa
}
