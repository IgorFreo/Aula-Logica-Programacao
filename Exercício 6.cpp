#include <stdio.h> // Biblioteca

int main() {
    int opcao; // Guarda a opção

    // WHILE: repete o menu enquanto a condição for verdadeira
    while (1) {

        // Mostra as opções disponíveis
        printf("\n=== CENTRAL DE ATENDIMENTO ===\n");
        printf("1 - Suporte tecnico\n");
        printf("2 - Suporte financeiro\n");
        printf("3 - Falar com atendente\n");
        printf("4 - Desligar chamada\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // IF: verifica se o usuário escolheu uma opção válida
        if (opcao == 1) {
            printf("Voce escolheu o suporte tecnico.\n");

        // ELSE IF: verifica se a opção escolhida foi suporte financeiro
        } else if (opcao == 2) {
            printf("Voce escolheu o suporte financeiro.\n");n

        // ELSE IF: verifica se o usuário quer falar com um atendente
        } else if (opcao == 3) {
            printf("Aguarde, voce sera direcionado para um atendente.\n");

        // ELSE IF: verifica se o usuário escolheu disparar a chamada
        } else if (opcao == 4) {
            printf("Chamada sendo Desligada...\n");

            // BREAK: interrompe o WHILE e encerra o menu
            break;

        // ELSE: executa quando nenhuma das opções anteriores foi escolhida
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0; // Finaliza o programa
}
