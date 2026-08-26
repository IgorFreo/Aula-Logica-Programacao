#include <stdio.h> // Biblioteca

int main() {
    int quantidade; // Guarda a quantidade de produtos

    // DO-WHILE: executa o código pelo menos uma vez e depois repete enquanto a condição do WHILE for verdadeira
    do {
        printf("Digite a quantidade de produtos que foram repostos ou digite (0 para encerrar): ");
        scanf("%d", &quantidade);

        // IF: verifica se o operador digitou 0
        if (quantidade == 0) {
            printf("Isso é uma EMERGÊNCIA NO ESTOQUE! O Sistema vai ser encerrado.\n");

            // BREAK: interrompe o DO-WHILE imediatamente
            break;

        // ELSE: executa quando a quantidade não for 0
        } else {

            // IF: verifica se a quantidade é negativa
            if (quantidade < 0) {
                printf("Erro! A quantidade de um estoque nao pode ser negativa.\n");

            // ELSE: executa quando a quantidade for válida
            } else {
                printf(" Os %d produtos foram repostos com sucesso.\n", quantidade);
            }
        }

    // WHILE: mantém o programa repetindo enquanto a quantidade não for 0
    } while (quantidade != 0);

    return 0; // Fim do programa
}
