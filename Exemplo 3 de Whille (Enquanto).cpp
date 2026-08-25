#include <stdio.h>

int main() {
	printf("--- Alfabeto com WHILE ---\n\n");
	printf("Letra | Codigo ASCII\n");
	printf("----------------------\n");
	
	// 1. Incializando da variável do tipo char antes do whille
	char letra = 'A';
	
	// 2. Condição: o loop roda enquanto a letra for menor ou igual a 'Z'
	while (letra <= 'Z') {
		// Exige a letra e o seu código ASCII correspondente
		printf(" %c  |    %d\n", letra, (int)letra);
		
		// 3. Incremento: passa para a próxima letra do alfabeto
		letra++;
	}
	
	return 0;
}
