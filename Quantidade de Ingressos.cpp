#include <stdio.h>//biblioteca

int main(){//Classe Principal
	
	const float preco_ingresso = 30.00;//Const
	
	int quantidade;//Declarando uma variavel do tipo inteiro
	float total;//Declarando uma variavel do tipo float, decimal
	
	printf ("Digite a quantidade e ingressos desejado: ");//imprime uma mensagem
	scanf("%d", &quantidade);//captura uma variavel
	
	total = quantidade * preco_ingresso;
	
	printf("O valor total da compra e: R$ %.2f \n", total);//imprime uma mensagem
	
	return 0;//fim do programa

}
