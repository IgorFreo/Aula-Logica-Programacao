#include <stdio.h>//Biblioteca

int main(){//Principal
	
	const float cotacao_dolar = 5.50;//Const, nao pode ser mudada
	float reais, dolares;//declarando as variaveis
	
	printf("Digite o valor em reais (R$):");//Imprime uma mensagem na tela
	
	scanf ("%f", &reais);//Captura a variavel
	
	dolares = reais / cotacao_dolar;//Dolar recebe a variavel e divide pelo valor do dia
	
	printf(" O valor equivalente em Dolares e: US$ %.2f \n", dolares);//Imprime uma mensagem na tela
	return 0;//Fim do Programa
}

