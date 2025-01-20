#Concatenar é encadear de forma lógica dois valores

#Usando Strings
nome = 'Arthur'
sobrenome = 'Silva'

concat1 = (nome + " " + sobrenome) #concatenação de valores string usando o operador (+)
concat2 = ('{} {}').format(nome, sobrenome) # concatenação usando função .format(), que retorna o valor especificado
concat3 = (f'{nome} {sobrenome}') #f-string é uma ferramenta que permite formatar elementos no python

print(concat1, concat2, concat3)