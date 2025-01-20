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

#Tipos de Variáveis Numéricas

#int(inteiros)
val1 = 10
val2 = 12

#float(ponto flutuante)
val3 = 5.5
val4 = 6.9

#Tipos de Variáveis de Texto

#str(string), declaradas a partir de aspas ""
str1 = "Hello World"
str2 = "Abacaxi"

#Tipos de Variáveis de Condição

#bool(booleano)
bool1 = True
bool2 = False

# Tipos de Variáveis de Conjunto

#list(lista[])
list1 = [1, 2, 3, 4]
list1[0] # Output: 1
list1[1] # Output: 2
list1[2] # Output: 3
list1[3] # Output: 4

#dict(dicionario{chave:valor})
dict1 = {
    "nome": "João",
    "idade": 10,
    "altura": 1.40,
    "saude": "Excelente"
}

dict1["nome"] # Output: João
dict1["idade"] # Output: 10
dict1["altura"] # Output: 1.40
dict1["saude"] # Output: Excelente