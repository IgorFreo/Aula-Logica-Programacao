#include <stdio.h> // Biblioteca

int main(){ // Declarando uma Variavel
	int opcao; // Variavel Principal
	
	printf("=== Menu Principal === \n"); // Apresenta uma informação na tela
	printf("1. Iniciar Jogo \n"); // Apresenta uma informação na tela
	printf("2. Carregar Jogo \n"); // Apresenta uma informação na tela
	printf("3. Configurações \n"); // Apresenta uma informação na tela
	printf("4. Sair \n"); // Apresenta uma informação na tela
	scanf("%d", &opcao); // Captura uma Variavel - "opcao"
	
	switch (opcao){ // Seleção da caso
		case 1: // Caso um
			printf("\n Iniciando um Jogo... \n");
			break; // Parar na condição
			
		case 2: // Caso dois
			printf("\n Carregando save anterior... \n");
			break; // Parar na condição
			
		case 3: // Caso três
			printf("\n Abrindo painel de configurcoes... \n");
			break; // Parar na condição
			
		case 4: // Caso quatro
			printf("\n Saindo do programa. Ate mais! \n");
			break; // Parar na condição
			
		default: // Não encontra o caso
			printf("\n Opção invalida! Escolha um numero de 1 a 4 \n");
			break; // Parar na condição
	}
	
	return 0; // Fim do Programa
}
