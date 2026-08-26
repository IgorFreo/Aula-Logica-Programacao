#include <stdio.h> // Biblioteca usada para printf e scanf

int main() {
    int opcao; // Guarda a opção escolhida no menu
    float saldo = 5000; // Define o saldo inicial da conta
    float saque; // Guarda o valor que o usuário deseja sacar

    // DO-WHILE: executa o menu pelo menos uma vez e repete enquanto a condição do WHILE for verdadeira
    do {
        printf("\n=== CAIXA ELETRONICO DO SICREDI ===\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Realizar Saque\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    // IF: verifica se o usuário escolheu consultar o saldo
        if (opcao == 1) {
            printf("Seu saldo atual e: R$ %.2f\n", saldo);

	// ELSE: executa quando a opção não é a consulta de saldo
        } else if (opcao == 2) {
            printf("Digite o valor do saque: R$ ");
            scanf("%f", &saque);

    // IF: verifica se o valor do saque é maior que o saldo
            if (saque > saldo) {
                printf("Saldo insuficiente! Saque rejeitado.\n");

    // ELSE: executa quando existe saldo suficiente
            } else {
                saldo = saldo - saque;
                printf("Saque realizado com sucesso!\n");
                printf("Saldo restante: R$ %.2f\n", saldo);
            }

    // ELSE: verifica se a opção escolhida é diferente das opções anteriores
        } else if (opcao == 3) {
            printf("Caixa eletronico encerrado.\n");

        // BREAK: interrompe o DO-WHILE e sai do menu
            break;

        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    // WHILE: faz o menu continuar sendo exibido enquanto a opção escolhida não for 3
    } while (opcao != 3);

    return 0; // Fim do programa
}
