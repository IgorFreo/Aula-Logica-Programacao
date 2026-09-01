#include <stdio.h>

int main() {
	int linhas = 2, colunas = 3;
	int matriz[2][3];
	int soma = 0;
	
	// Lendo os valores digitados pelo usuario para preecher a matriz
	printf("Digite os valores para a matriz (2x3): \n");
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			soma += matriz[i][j]; // Acumula a soma dos valores informados
		}
	}
	
	// Exibindo a matriz estruturada em formato de tabela
	printf("\n Matriz final: \n");
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			printf("%d\t", matriz[i][j]); // '\t' adiciona uma tabulacao (espaço horizontal)
		}
		printf("\n");
	}
	
	printf("\n A soma de todos os elementos da matriz é: %d\n", soma);
	
	return 0;
}
