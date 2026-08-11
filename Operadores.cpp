#include <stdio.h>//Biblioteca

int main (){
	//--------------------------------------------------
	// 1. Precadencia de Operadores
	//--------------------------------------------------
	// A manipulação (*) tem precadencia maior que a adição (+)
	int res_precadencia = 5 + 3 * 2; // Equivalente a 5 + 6 = 11
	printf("1. Precedencia (5 + 3 * 2) = %d\n", res_precadencia);
	
	// O uso de parênteses altera essa ordem, pois possuem prioridade máxima
	int res_parenteses = (5 + 2) * 2; //Equivalente a 8 * 2 = 16
	printf("  Com parenteses ((5 + 3) * 2) = %d\n", res_parenteses);
	
	//---------------------------------------------------
	// 2. Modeladoras de tipos (Casting Explicito)
	//---------------------------------------------------
	int a = 5, b = 2;
	
	// Divisão inteira: o resultado descarta a parte fracionária (resulta em 2)
	float div_inteira = a / b;
	printf("\n2. Divisao inteira (5 / 2) = %.2f\n", div_inteira);
	
	//Conversão explícita: transforma 'a' em float temporariamente para obter a precisão decimal
	float div_com_cast = (float)a / b;
	printf("  Divisao com cast ((float)5 / 2) = %.2f\n", div_com_cast);
	
	//-----------------------------------------------------
	//3. Operador Vírgula (,) 
	//-----------------------------------------------------
	// O operador vígula avalia todas as expressões da esquerda para a direira
	// e retorna o valor da última expressão.
	int x;
	x = (printf("\n3. Executando dentro do operador virgula...\n"), 10 + 20);
	
	// O printf foi executando e 'x' recebeu o valor 30
	printf ("  Valor final armazenado em x = %d\n", x);
	
	return 0;
}
