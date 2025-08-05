#include <stdio.h>
#include <iostream>
using namespace std;    // importa o contêiner 'std', que organiza o código, sem precisar colocar std:: em cada linha

int main(void) {
    char nome[20];
    cout << "Qual o seu nome? \n";
    cin >> nome;    // cin é como o 'input' do python
    cout << "Muito prazer " << nome << "\n";
    printf("%s, qual o seu sobrenome?", nome);

    return 0;
}