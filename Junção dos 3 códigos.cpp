#include <stdio.h>
#include <string.h>

int main() {

    // ==========================================================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ==========================================================

    // Guarda 3 nomes, com até 49 caracteres cada.
    char nomes[3][50];

    // Matriz onde o usuário irá digitar 6 números.
    int matriz[2][3];

    // Matriz que já possui valores definidos.
    int matrizFixa[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // Guarda a soma dos números digitados.
    int soma = 0;

    // Guarda a opção escolhida no menu.
    int opcao;

    // Controla se o programa deve continuar funcionando.
    int continuar = 1;


    // ==========================================================
    // MENU PRINCIPAL
    // ==========================================================

    // O while mantém o programa funcionando até o usuário
    // escolher a opção de sair.
    while (continuar == 1) {

        printf("\n========================================\n");
        printf("          SISTEMA DE MATRIZES\n");
        printf("========================================\n");
        printf("1 - Cadastrar nomes\n");
        printf("2 - Preencher matriz 2x3\n");
        printf("3 - Visualizar matriz 3x3\n");
        printf("4 - Mostrar resultado completo\n");
        printf("5 - Sair\n");
        printf("========================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Limpa o Enter que ficou no teclado após o scanf.
        getchar();


        // ======================================================
        // OPÇÃO 1 - CADASTRO DOS NOMES
        // ======================================================

        if (opcao == 1) {

            printf("\n--- CADASTRO DE NOMES ---\n");

            // O for repete 3 vezes para cadastrar os nomes.
            for (int i = 0; i < 3; i++) {

                printf("Digite o nome %d: ", i + 1);

                // fgets permite que o nome tenha espaços.
                fgets(nomes[i], 50, stdin);

                // Remove o Enter armazenado pelo fgets.
                nomes[i][strcspn(nomes[i], "\n")] = '\0';
            }

            printf("\nNomes cadastrados com sucesso!\n");
        }


        // ======================================================
        // OPÇÃO 2 - MATRIZ 2x3
        // ======================================================

        else if (opcao == 2) {

            printf("\n--- PREENCHIMENTO DA MATRIZ 2x3 ---\n");

            // Zera a soma antes de começar um novo preenchimento.
            soma = 0;

            // Percorre as duas linhas.
            for (int i = 0; i < 2; i++) {

                // Percorre as três colunas.
                for (int j = 0; j < 3; j++) {

                    printf("Digite o valor [%d][%d]: ", i, j);

                    scanf("%d", &matriz[i][j]);

                    // Adiciona o número digitado à soma.
                    soma += matriz[i][j];
                }
            }

            printf("\nMatriz armazenada com sucesso!\n");
        }


        // ======================================================
        // OPÇÃO 3 - MATRIZ 3x3
        // ======================================================

        else if (opcao == 3) {

            printf("\n--- MATRIZ 3x3 ---\n");

            // Percorre as linhas.
            for (int i = 0; i < 3; i++) {

                // Percorre as colunas.
                for (int j = 0; j < 3; j++) {

                    printf("%d\t", matrizFixa[i][j]);
                }

                // Pula para a próxima linha.
                printf("\n");
            }

            // Mostra um elemento específico.
            printf("\nElemento [1][2]: %d\n", matrizFixa[1][2]);
        }


        // ======================================================
        // OPÇÃO 4 - RESULTADO COMPLETO
        // ======================================================

        else if (opcao == 4) {

            printf("\n========================================\n");
            printf("             RESULTADO GERAL\n");
            printf("========================================\n");

            // --------------------------------------------------
            // MOSTRA OS NOMES
            // --------------------------------------------------

            printf("\nNOMES CADASTRADOS:\n");

            for (int i = 0; i < 3; i++) {
                printf("%d - %s\n", i + 1, nomes[i]);
            }


            // --------------------------------------------------
            // MOSTRA A MATRIZ 2x3
            // --------------------------------------------------

            printf("\nMATRIZ 2x3:\n");

            for (int i = 0; i < 2; i++) {

                for (int j = 0; j < 3; j++) {

                    printf("%d\t", matriz[i][j]);
                }

                printf("\n");
            }

            printf("Soma dos elementos: %d\n", soma);


            // --------------------------------------------------
            // MOSTRA A MATRIZ 3x3
            // --------------------------------------------------

            printf("\nMATRIZ 3x3:\n");

            for (int i = 0; i < 3; i++) {

                for (int j = 0; j < 3; j++) {

                    printf("%d\t", matrizFixa[i][j]);
                }

                printf("\n");
            }

            // Mostra o elemento solicitado.
            printf("\nElemento [1][2]: %d\n", matrizFixa[1][2]);

            printf("\n========================================\n");
            printf("       DADOS EXIBIDOS COM SUCESSO\n");
            printf("========================================\n");
        }


        // ======================================================
        // OPÇÃO 5 - SAIR
        // ======================================================

        else if (opcao == 5) {

            // Altera a variável para encerrar o while.
            continuar = 0;

            printf("\nEncerrando o programa...\n");
        }


        // ======================================================
        // OPÇÃO INVÁLIDA
        // ======================================================

        else {

            // Caso o usuário digite uma opção que não existe,
            // esta mensagem será exibida.
            printf("\nOpcao invalida! Escolha uma opcao de 1 a 5.\n");
        }
    }


    // ==========================================================
    // FINAL ÚNICO
    // ==========================================================

    printf("\n========================================\n");
    printf("       PROGRAMA FINALIZADO!\n");
    printf("========================================\n");

    // Encerra o programa corretamente.
    return 0;
}
