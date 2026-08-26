#include <stdio.h> // Biblioteca

int main() {
    int pressao; // Guarda o valor da pressão arterial
    int senha;   // Guarda a senha digitada pelo enfermeiro

    // DO-WHILE: executa o código pelo menos uma vez e depois repete enquanto a condição do WHILE for verdadeira
    do {
        printf("\nDigite a pressao arterial ou digite (9999 para encerrar): ");
        scanf("%d", &pressao);

        // IF: verifica se o valor digitado e a senha de fechamento
        if (pressao == 9999) {
            printf("Senha de fechamento digitada.\n");

            // BREAK: interrompe o DO-WHILE e encerra a triagem
            break;

        // ELSE: executa quando o valor nao for a senha de fechamento
        } else {

            // IF: verifica se a pressao esta fora da faixa aceitavel
            if (pressao < 60 || pressao > 120) {
                printf("ERRO! Pressao fora da faixa biologica aceitavel.\n");

            // ELSE: executa quando a pressao estiver dentro da faixa
            } else {
                printf("Pressao registrada com sucesso: %d mmHg\n", pressao);
            }
        }

    // WHILE: continua o programa enquanto a senha de fechamento nao for digitada
    } while (pressao != 9999);

    return 0; // Finaliza o programa
}
