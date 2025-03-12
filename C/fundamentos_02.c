#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Arrays/Matrizes Unidimensionais
    int array_int[5] = {2, 4, 6, 8, 0};
    for (int i = 0; i < 5; i++) // Usamos um loop para representar os elementos da array
        printf("%d, ", array_int[i]);
    printf("\n");

    // Estruturas de decisão
    int guessNumber = 555;
    int guess;

    printf("Digite um valor inteiro entre 500 e 600, até acertar o valor correto:");
    scanf("%i", &guess);
    printf("\n");

    if (guess < 555)
        printf("Seu palpite é muito baixo, continue tentando\n");
    else if (guess == 555)
        printf("Parabéns, você acertou!!\n");
    else
        printf("Seu palpite é muito alto, continue tentando\n");

    // Strings em C
    char *str = "John Doe";                                                        // Variavel de ponteiro com valor de uma string "fixa"
    char name[] = "Jane Doe ";                                                     // Variável de array manipulável
    printf("Seu nome é %s\nA variável tem comprimento de %d\n", str, strlen(str)); // Usamos strlen() para descobrir o comprimento de uma string

    // Concatenação de Strings
    char complete[20];

    strncat(complete, name, 8);
    strncat(complete, str, 8);
    printf("%s\n", complete);

    // Loops "for" e "while"

    // Ponteiros
    // ponteiros são elementos fundamentais que permitem manipular diretamente a memória do computador. Um ponteiro é uma variável que armazena o endereço de outra variável.
    int numero = 42;    // Uma variável inteira
    int *ponteiro;      // Declarando um ponteiro para inteiro
    ponteiro = &numero; // Atribuindo o endereço de 'numero' ao ponteiro
    printf("Valor de 'numero': %d\n", numero);
    printf("Endereço de 'numero': %p\n", (void *)&numero);
    printf("Valor apontado por 'ponteiro': %d\n", *ponteiro);

    // Ponteiros permitem que alteremos os dados na célula de memória
    *ponteiro = 100;
    printf("Novo valor de 'numero' através do ponteiro: %d\n", numero);

    // Ponteiros podem ser usados para acessar elementos de arrays e realizar operações aritméticas
    int numeros[] = {1, 2, 3, 4, 5};
    int *ponteiroArray = numeros;
    printf("Primeiro elemento do array: %d\n", *ponteiroArray);
    printf("Segundo elemento do array: %d\n", *(ponteiroArray + 1)); // Os elementos da array são encontrados a partir do ponteiro + X

    // Ponteiro é frequentemente usado para passar parâmetros por referência para funções
    // EXEMPLO DE UM PROGRAMA COMPLETO ABAIXO:
    
    // void duplicaValor(int *x)
    // {
    //     *x *= 2;
    // }
    // int main()
    // {
    //     int numero = 5;
    //     duplicaValor(&numero);
    //     printf("O dobro de 5 é: %d\n", numero);
    //     return 0;
    // }
    
    return 0;
}