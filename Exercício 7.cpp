#include <stdio.h> // Biblioteca

int main() {
    float nota; // Guarda a nota digitada pelo professor

    // DO-WHILE: executa o código pelo menos uma vez e repete enquanto a condição do WHILE for verdadeira
    do {
        printf("\nDigite a nota do aluno ou digite (-1 para encerrar): ");
        scanf("%f", &nota);

        // IF: verifica se o professor digitou -1 para encerrar
        if (nota == -1) {
            printf("O Lancamento das notas foi encerrado.\n");

            // BREAK: interrompe o DO-WHILE imediatamente
            break;

        // ELSE: executa quando a nota nao for -1
        } else {
            // IF: verifica se a nota esta fora do intervalo de 0 a 10
            if (nota < 0 || nota > 10) {
                printf("Nota invalida! Digite uma nota que vai de 0 e 10.\n");

            // ELSE: executa quando a nota estiver entre 0 e 10
            } else {
                printf("Nota %.1f Foi Registrada com sucesso!\n", nota);
            }
        }

    // WHILE: continua repetindo enquanto o professor nao digitar "-1"
    } while (nota != -1);

    return 0; // Finaliza o programa
}
