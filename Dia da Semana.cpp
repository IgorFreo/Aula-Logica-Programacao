#include <stdio.h> // Biblioteca

int main(){ // Classe Principal
	int dia_semana = 5; // Declarando uma Variavel
	switch (dia_semana){ // Seleção da Semana
		
		case 1: // Caso um
			printf("Domingo. \n");
			break; // Parar na condição
			
		case 2: // Caso dois
			printf("Segunda - feira. \n");
			break; // Parar na condição
			
		case 3: // Caso três
			printf("Terca - feira. \n");
			break; // Parar na condição
			
		case 4: // Caso quatro
			printf("Quarta - feira. \n");
			break; // Parar na condição
			
		case 5: // Caso cinco
			printf("Quinta - feira. \n");
			break; // Parar na condição
			 
		case 6: // Caso seis
			printf("Sexta - feira. \n");
			break; // Parar na condição
			
		case 7: // Caso sete
			printf("Sabado. \n");
			break; // Parar na condição
			
		default: // Não encontra o caso
			printf("Dia invalido");
			break; // Parar na condição
			
	}
	
	return 0; // Fim do Programa
}
