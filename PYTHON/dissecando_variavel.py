# Sempre que digitarmos o valor de 'input' sem um tipo pré-determinado, o valor pertencerá à classe str(string)
variavel = input('Digite algo: \n')
print('O tipo primitivo desse valor é', type(variavel))

# Para identificar se 'variavel' é um numero, utilizamos o seguinte
alfabetico = variavel.isalpha()
if (alfabetico ==  True):
    print('O valor digitado é alfabético')
else:
    print('FALSO, o valor não é alfabético')

numerico = variavel.isnumeric()
if (numerico == True):
    print('O valor digitado é numérico')
else:
    print('FALSO, o valor não é um número')

numerico = variavel.isalnum()
if (numerico == True):
    print('O valor digitado é alfanumérico')
else:
    print('FALSO, o valor não é um número')

espaco = variavel.isspace()
if (espaco == True):
    print('O valor contém apenas espaços')
else:
    print('FALSO, o valor não contém apenas espaços')

print('\n LEMBRE-SE!! \n\n O python é uma linguagem que apresenta 6 tipos: \n int(inteiros), \n float(ponto flutuante), \n str(string), \n bool(booleano), \n list(lista[]), \n dict(dicionário{chave:valor}) \n')