#include <stdio.h> // Biblioteca
int main() {
    int idade; // Guarda a idade digitada pelo usuário

    // WHILE: repete o código enquanto a condição for verdadeira e O 1 faz o laço continuar até que um BREAK seja executado
    while (1) {

        printf("Digite a sua idade ou (999 para encerrar): ");
        scanf("%d", &idade);

        // IF: verifica se o usuário digitou o código de parada 999
        if (idade == 999) {
            printf("A Leitura de idades foi encerrada.\n");

            // BREAK: interrompe o WHILE e encerra o programa
            break;

        // ELSE: executa quando a idade não for 999
        } else {

            // IF: verifica se a idade está fora do intervalo permitido
            if (idade < 0 || idade > 120) {
                printf("Essa Idade é considerada impossivel! Digite uma idade entre 0 e 120.\n");

            // ELSE: executa quando a idade estiver dentro do intervalo
            } else {
                printf("Sua Idade de %d anos foi cadastrada com sucesso em nosso sistema!\n", idade);
            }
        }
    }

    return 0; // Finaliza o programa
}
