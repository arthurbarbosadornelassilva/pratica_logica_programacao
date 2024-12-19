# Testando a entrada e saída de dados básica

entrada = str(input("Digite o seu nome: "))
print(f'Olá {entrada}, é um prazer conhecê-lo')

# Entrada e saída de dados com operadores aritméticos

print(f'{entrada}, escolha 2 valores simples:')
n1 = int(input('Valor 1: '))
n2 = int(input('Valor 2: '))
soma = (n1 + n2)
print(f'A soma entre esses valores é: {soma}')