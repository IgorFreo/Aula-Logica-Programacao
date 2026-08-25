#include <stdio.h>

int main(){
	// 1. Inicialização da variável de controle fora do laço
	int i = 1;
	
	// 2. Condição: O loop roda ENQUANTO 'i' for menor ou igual a 10
	while (i <=10) {
		printf("Numero: %d\n", i);
		
		// 3. Incremento: Atualiza a variável para enviar loop infinito
		i++;
	}
	
	return 0;
}
