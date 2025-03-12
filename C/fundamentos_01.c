/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int populacao = 100000;
float peso = 75.5;
char str[] = "O2"; // char str[] é uma array de caracteres que pode ser usada para valores de string
char letra = 'A'; // char sozinho é para caracter isolado
int num1 = 8;
int numero1, numero2, soma, x;

int main()
{
	printf("Hello World \n");
	printf("Valor populacao = %i, valor peso = %f, simbolo oxigenio = %s\n", populacao, peso, str);
    putchar(letra);
    printf("\nValor = %6i\n", num1);
    printf("Valor = %06i\n", num1);
    printf("Valor peso = %6.1f\n", peso);
    printf("Valor peso = %06.2f\n", peso); 
    
    // o comando \a faz o alto-falante emitir um 'bip'
    
    x = getchar();
    x = getch();
    // x = getche();
    
    printf("Digite valor para n1: \n");
    scanf("%i", &numero1);
    printf("Digite valor para n2: \n");
    scanf("%i", &numero2);
    
    soma = numero1 + numero2;
    
    printf("Numero 1 = %i\n Numero 2 = %i\n Soma dos numeros = %i\n",  numero1, numero2, soma);   
    
    //caracteres especiais para print
    
    printf("Teste de porcentagem: %%\n");
    printf("Teste de barra invertida: \\\n");
    printf("%s%d%% \n", "Juros de ", 10);
    printf("%d \n",letra); // Printa o valor ASCII da letra

    // Operadores aritméticos

    // OPERADOR
    // + Adição
    // - Subtração
    // * Multiplicação
    // / Divisão (inteira --> valores inteiros, ou real --> valores reais)
    // % Módulo (resto da divisão)
    // ++ Incremento (i = i + 1) ou (i += 1)
    // -- Decremento (i = i - 1) ou (i -= 1)

    // Operadores relacionais

    // > Maior que
    // < Menor que
    // >= Maior ou igual
    // <= Menor ou igual
    // == Igual
    // != Diferente

    // Operadores lógicos

    // && E
    // || OU
    // ! NÃO
    
    // Estruturas de repetição & matrizes

    int i, j,  mat1[3][3] = {1,2,3,4,5,6,7,8,9}, mat3[3][3] = {10,11,12,13,14,15,16,17,18}, mat4[3][3];
    char mat2[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'}; // Matriz de caracteres

    printf("\n\n");
    for(i = 0; i < 3; i++) {    // índice das linhas
        for(j = 0; j < 3; j++)  // índice das colunas
            printf("%d", mat1[i][j]);
        printf("\n");
    }

    printf("\n\n");
    for(i = 0; i < 3; i++) {    // índice das linhas
        for(j = 0; j < 4; j++)  // índice das colunas
            printf("%c", mat2[i][j]);
        printf("\n");
    }

    // Soma de matrizes

    printf("\n\n");
    for(i = 0; i < 3; i++) {    // índice das linhas
        for(j = 0; j < 3; j++)  // índice das colunas
            mat4[i][j] = mat1[i][j] + mat3[i][j];
    }

    for(i = 0; i < 3; i++) {    // índice das linhas
        for(j = 0; j < 3; j++)  // índice das colunas
            printf("%2d", mat4[i][j]);
        printf("\n");
    }

    return 0;
}