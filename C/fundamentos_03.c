# include <stdio.h>
# include <stdlib.h>

// Passagem de parâmetros por referência para funções através de ponteiro

void duplicaValor(int *x) { // aqui é criada a função duplica valor, que utiliza um ponteiro como parâmetro de referência
    *x *= 2;
}

void main () {
    int numero = 5;
    duplicaValor(&numero);
    printf("O dobro de 5 é: %d\n", numero);
    
    //Passagem de parâmetros por Ponteiros para alocação de memória
    
    int * ptr_a;
    ptr_a = malloc (sizeof(int)); // cria a alocação de memória necessária para 1 inteiro e coloca no ponteiro 'ptr_a' o endereço dessa alocação

    if (ptr_a == NULL) {
        printf("Memória Insuficiente!\n");
        exit(1);
    }

    printf("Endereço de ptr_a: %p\n", ptr_a);
    *ptr_a = 90;
    printf("Conteúdo de ptr_a: %d\n", *ptr_a); // imprime 90
    free(ptr_a); // Libera a área alocada na função 'malloc'

    // Referência indireta, ponteiro duplo ou ponteiro para ponteiro
    int a = 231 ;
    int *pd ; // ponteiro direto
    int **pi ; // ponteiro indireto, equivale a int *(*pd)
    pd = &a ; // pd recebe o endereço de um int
    pi = &pd ; // pi recebe o endereço de um ponteiro para int
    printf ("a está em %p e vale %d\n", &a, a);
    printf ("pd está em %p e vale %p\n", &pd, pd);
    printf ("pi está em %p e vale %p\n", &pi, pi);
    printf ("conteudo apontado por pd %d\n", *pd);
    printf ("conteudo que pi aponta %d\n", **pi);
    // printf ("*pi vale %p\n", *pi);

}