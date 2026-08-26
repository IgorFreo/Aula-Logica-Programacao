#include <stdio.h> // Biblioteca usada para printf e scanf

int main() {
    int chaveCorreta = 1234; // Guarda a chave de segurança correta
    int chaveDigitada;       // Guarda a chave que o usuário vai digitar

    // WHILE: repete o código enquanto a condição for verdadeira
    // Nesse caso, o programa continua pedindo a chave até acertar
    while (1) {

        // Pede para o usuário digitar a chave
        printf("Digite a sua chave de seguranca: ");
        scanf("%d", &chaveDigitada);

        // IF: verifica se a chave digitada é igual à chave correta
        if (chaveDigitada == chaveCorreta) {
            printf("Chave correta! Seu Acesso Foi liberado Com Sucesso.\n");

            // BREAK: interrompe o while e encerra o loop
            break;

        // ELSE: executa quando a condição do IF é falsa
        } else {
            // Mostra um aviso quando a chave está errada
            printf("Chave incorreta! CUIDADO!\n");
        }
    }

    return 0; // Finaliza o programa
}
