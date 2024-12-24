import pandas as pd

data = {
    'Nome': ['Ana', 'Bruno', 'Carlos', 'Daniela', 'Eduardo'],
    'Idade': [23, 35, 45, 22, 28],
    'Salário': [50000, 60000, 80000, 45000, 52000]
}
print(f'O funcionário mais velho da empresa é {data['Nome'][2]}, com {data['Idade'][2]} anos')

data_frame = pd.DataFrame(data)
print(data_frame)

media_salario = data_frame['Salário'].mean()
print(f'A média salarial dessa empresa é de {media_salario}')