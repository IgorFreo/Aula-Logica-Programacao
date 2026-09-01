#include <stdio.h> // Biblioteca

int main(){ // Classe Principal
	
	char vogais[5] = {'A', 'E', 'i', 'O', 'U'}; // DEclarando valores do tipo (char)
	printf("A letra do indice 2 e: %c \n\n", vogais[2]); // Mostrar as letras
	
	vogais[2] = 'X'; // Mudando o indice 2, para o valor X
	printf("Nova letra do indice 2 após a alteração: %c \n\n", vogais[2]); // Mostra uma mensagem na tela
	
	printf("Lista completa dos elementos do vetor: \n"); // Mostra uma mensagem na tela
	for (int i = 0; i<5; i++){ // Para - i irá receber 0 até chegar no número 5
		printf("Indice %d -> Letra: %c \n", i, vogais[i]); // Mostra uma mensagem na tela
	}

	return 0; // fim do programa

}
