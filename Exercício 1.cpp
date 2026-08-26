#include <stdio.h> //Biblioteca

int main() {
    int senhaCorreta = 0000; // senha armazenada
    int tentativa;

    do {
        printf("Digite a senha do cofre: ");
        scanf("%d", &tentativa); // lê tentativa do usuário

        if (tentativa == senhaCorreta) {
            printf("Senha correta! Cofre aberto.\n");
            break; // encerra o loop imediatamente
        } else {
            printf("Senha incorreta! Tente novamente.\n"); // continua o loop
        }

    } while (1); // loop infinito, só sai pelo break

    return 0; // Fim do Programa
}
