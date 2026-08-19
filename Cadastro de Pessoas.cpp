#include <stdio.h>   // Biblioteca
#include <string.h>  // Necessário para manipular textos (strings)

int main(){ 
	// Variaveis para armazenar o cadastro
	char nome[50];
	int idade = 0;
	int cadastro = 0; // Flag (bandeira) para saber se já existe um cadastro
	int opcao;
	
	do{
		
		printf("\n=========================\n");
		printf("Sistema de cadastro \n");
		printf(" 1. Cadastrar Usuario \n");
		printf(" 2. Consultar Cadastro \n");
		printf(" 3. Sair \n");
		printf(" Escolha uma opcao: \n");
		scanf("%d", &opcao);   // <-- CORRIGIDO: era printf, agora é scanf
		
		// Limpa o caractere 'enter' pendente no buffer após o scanf de números
		getchar();
		
		switch (opcao){
			case 1:
				printf("\n--- Novo Cadastro--- \n");
				printf("Digite o nome: ");
				// fgets lê o nome completo (incluindo espaços) de forma segura
				fgets(nome, 50, stdin);
				
				// Remove a quebra de linha (\n) que o fgets costuma capturar no final
				nome[strcspn(nome, "\n")] = 0;
				
				printf("Digite a idade: ");
				scanf("%d", &idade);
				
				cadastro = 1; // Marca que agora temos um usuário cadastrado!
				printf("Cadastro realizado com sucesso! \n");
				break;
				
			case 2:
				printf("\n--- CONSULTA DE CADASTRO ---\n");
				// Condicional para verificar se há dados
				if(cadastro == 1) {
					printf("Nome: %s\n", nome);   // <-- CORRIGIDO: era idade, agora é nome
					printf("Idade: %d anos \n", idade);
				} else {
					printf("Nenhum usuario cadastrado no momento!\n");		
				}
				break;
				
			case 3:
				printf("\n Encerrando o sistema... \n");
				break;
				
			default:
				printf("\n Opção inválida! Tente novamente. \n");
				break;
		}
		
	} while (opcao != 3); // O menu repete até o usuário digitar 3 para sair
	
	return 0; // Fim do programa
}
