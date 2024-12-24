print("Calculador em Python")

# Definindo uma função pra calculadora, responsável pelo cálculo das operações
def calculator():
    entrada1 = float(input("Digite o primeiro valor: "))
    entrada2 = float(input("Digite o segundo valor: "))

    operacao = str(input("Digite a operação desejada: \n 1-SOMA \n 2-SUBTRACAO \n 3-MULTIPLICACAO \n 4-DIVISAO \n 5-POTENCIACAO \n 6-MEDIA \n\n"))
    if (operacao == 'SOMA'):
        SOMA = entrada1 + entrada2
        print(f'Soma = {SOMA}')
    elif (operacao == 'SUBTRACAO'):
        SUB = entrada1 - entrada2
        print(f'Subtração = {SUB}')
    elif (operacao == 'MULTIPLICACAO'):
        MULTI = entrada1 * entrada2
        print(f'Multiplicação = {MULTI}')
    elif (operacao == 'DIVISAO'):
        DIV = entrada1 / entrada2
        print(f'Divissão = {DIV}')
    elif (operacao == 'POTENCIACAO'):
        POT = entrada1 ** entrada2
        print(f'Potenciação = {POT}')
    elif (operacao == 'MEDIA'):
        MED = (entrada1 + entrada2) / 2
        print(f'Media Aritmética: {MED}')
    else:
        print('ERRO! *escreva o nome da operação desejada de forma idêntica ao índice*')

calculator()