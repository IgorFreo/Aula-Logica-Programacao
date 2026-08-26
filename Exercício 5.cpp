#include <stdio.h> // Biblioteca

int main() {
    int codigo; // Guarda o código

    // DO-WHILE: executa o cardápio pelo menos uma vez  e depois repete enquanto a condição do WHILE for verdadeira
    do {
        // Exibe o cardápio
        printf("1 - X-Tudo\n");
        printf("2 - X-Bacon\n");
        printf("3 - Batata Cheedar e Bacon\n");
        printf("4 - X-Insano\n");
        printf("0 - Encerrar pedido\n");

        printf("Digite o codigo do lanche que vc deseja: ");
        scanf("%d", &codigo);

        // IF: verifica se o cliente escolheu o código correto
        if (codigo == 0) {
            printf("Seu Pedido Foi encerrado.\n");

            // BREAK: interrompe o DO-WHILE
            break;

        // ELSE IF: verifica se o código corresponde a um lanche
        } else if (codigo == 10) {
            printf("Voce escolheu X-Burguer.\n");
        } else if (codigo == 20) {
            printf("Voce escolheu X-Salada.\n");
        } else if (codigo == 30) {
            printf("Voce escolheu Batata Frita.\n");
        } else if (codigo == 40) {
            printf("Voce escolheu Refrigerante.\n");
            
        // ELSE: executa quando nenhum dos códigos anteriores foi escolhido
        } else {
            printf("Codigo invalido! Esse item nao existe.\n");
        }

    // WHILE: mantém o cardápio sendo exibido enquanto o código não for 0
    } while (codigo != 0);

    return 0; // Finaliza o programa
}
