import statistics

n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))

notas = [n1, n2]
media = statistics.mean(notas)

print(media)