#include <stdio.h> // Biblioteca

int main() {
    int senha = 0000; // Senha correta para acessar o sistema
    int tentativa; // Guarda a senha digitada pelo usuário
    int erros = 0; // Conta quantas vezes o usuário errou
    
	// DO-WHILE: executa o código pelo menos uma vez
    do {
        // Pede para o usuário digitar a senha
        printf("Digite a sua senha: ");
        scanf("%d", &tentativa);

        // Verifica se a senha digitada está correta
        if (tentativa == senha) {
            printf("Seu acesso foi liberado!\n");

        // BREAK: interrompe o laço imediatamente
            break;
        } else {
        // Aumenta o contador de erros
            erros++;

            printf("A senha está incorreta!\n");

         // IF: verifica se o usuário errou 3 vezes
            if (erros == 3) {
                printf("Seu acesso foi bloqueado!\n");

         // BREAK: sai do DO-WHILE quando atingir 3 erros
                break;
            }
        }

    } while (erros < 3); // Continua enquanto tiver menos de 3 erros

    return 0; // Fim do programa
}
