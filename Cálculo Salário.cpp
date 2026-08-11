#include <stdio.h>//Biblioteca

int main() {//Classe principal

    float salario;//Declarando uma variavel
    float salarioMinimo = 1621.00;//Declarando o valor da variavel

    printf("Digite o seu salario: R$ ");//Imprime uma mensagem na tela
    scanf("%f", &salario);//Captura a variavel

    if (salario >= salarioMinimo) {//Pergunta o salário da pessoa

        printf("\nVoce recebe um salario minimo ou mais!\n");//Imprime uma mensagem na tela
        printf("Seu salario e de %.2f salarios minimos.\n", salario / salarioMinimo);//Imprime uma mensagem na tela "Define quantos salários minímos a pessoa ganha EX: 5000,00 = 3.08 salários mínimos "

    } else {//senao a pessoa recebe menos que um salário mínimo

        printf("\nVoce recebe menos que um salario minimo!\n");//Imprime uma mensagem na tela
        printf("Faltam R$ %.2f para atingir o salario minimo.\n",//Imprime uma mensagem na tela "Estabele quanto falta para completar um salário minímo"
        salarioMinimo - salario);// faz uma subtração = valor do salário mínimo - valor do salário da pessoa
    }

    return 0;//Fim do Programa
}
