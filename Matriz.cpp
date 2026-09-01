#include <stdio.h> // Biblioteca

int main() {
    // Declara uma matriz 3x3 e inicializa seus valores
    int matriz[3][3] = { // Trabalhando com numeros inteiros
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    printf("Exibindo a matriz completa:\n"); // Mensagem na tela

    // O primeiro for percorre as linhas da matriz ate chegar no numero 3
    for (int i = 0; i < 3; i++) {

        // O segundo for percorre as colunas de cada linha
        for (int j = 0; j < 3; j++) { 

            // Exibe o elemento atual da matriz
            printf("%d ", matriz [i][j]);
        }

        // Pula para a próxima linha depois de terminar as colunas
        printf("\n");
    }

    // Exibe especificamente o elemento da linha 1 e coluna 2
    printf("\nElemento na posicao [1][2]: %d\n", matriz [2][2]);  // Mensagem na tela

    return 0; // FIm do programa
}
