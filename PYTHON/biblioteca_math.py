import math
import pandas

entrada = int(input('Digite um número inteiro'))
sqrt = math.sqrt(entrada)
media = pd.mean()

print("O dobro de {} vale {}\n O triplo vale {}\n A raiz quadrada é igual a {}\n A média equivale a {}".format(entrada, entrada*2, entrada*3, sqrt, media))