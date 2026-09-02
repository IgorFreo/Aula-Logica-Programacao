#include <stdio.h>
#include <string.h>

int main (){
	
	char cadastros[3][50]; // Matriz para armazenar 3 nomes (string), cada um com até 49 caracteres
	
	printf("--- Cadastro de Nomes ---\n");
	
	
	for (int i = 0; i < 3; i++) { // Coletando os nomes via teclado
		printf("Digite o nome para o cadastro %d: ", i + 1);
		
		// fgets lê a string com espaços e evita estouro de buffer (memório)
		fgets(cadastros[i], 50, stdin);
		
		// Remove a quebra de linha (n) que o fgets costuma capturar no final
		cadastros[i][strcspn(cadastros[i], "\n")] = '\n0';
	}
	
	// Exibindo os nomes dos cadastrados
	printf("\n --- Lista de Cadastros Realizados ---\n");
	for (int i = 0; i < 3; i++) {
		printf("Cadastro [%d]: %s\n", i, cadastros[i]);
	}
	
	return 0;
}
