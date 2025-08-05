//Os manipuladores são elementos que determinam o formato em que os dados serão escritos ou lidos de um fluxo
/*
Os principais manipuladores são:
oct -> leitura e escrita de um inteiro octal
dec -> leitura e escrita de um inteiro decimal
hex -> leitura e escrita de um inteiro hexadecimal
endl -> insere um caracter de mudança de linha
setw(int n) -> define campo com largura de n caracteres
setprecision(int n) -> define total de dígitos na impressão de números reais
setfill(char c) -> define o caracter usado no preenchimento de campos
flush -> descarrega o buffer após a escrita
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int i = 1234;
    float p = 12.34567;
    cout << "|"
         << setw(8) << setfill('*')
         << hex << i
         << "|\n"
         << "|"
         << setw(6) << setprecision(4)
         << p
         << "|" << endl;

    return 0;
}