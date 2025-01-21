# Classes (Objetos)

#Um objeto ou classe é uma entidade que possui características (atributos) e comportamentos (métodos)

class Pessoa:
    def __init__ (self, nome, idade, altura):
        self.nome = nome
        self.idade = idade
        self.altura = altura

    def cumprimentar(self, nome_da_pessoa):
        return print(f"Olá {nome_da_pessoa}, meu nome é {self.nome}, tenho {self.idade} anos e {self.altura} metros")

# é possível determinar o valor dos atributos sem antes declará-los como feito abaixo em "nome='Felipe..."
#  Poderia ter sido feito somente "Pessoa('Felipe', 23, 1.83)"
pessoa1 = Pessoa(nome='Felipe', idade=23, altura=1.83)
print(pessoa1.nome)
print(pessoa1.idade)
print(pessoa1.altura)

pessoa1.cumprimentar("Roger")

#Herança de Classes
class Aluno(Pessoa):
    def __init__ (self, nome, idade, altura, matricula):
        super(). __init__ (nome, idade, altura)
        self.matricula = matricula

    def estudar(self):
        return print(f"{self.nome}, de matrícula {self.matricula}, está estudando")

aluno1 = Aluno("Ricardo", 18, 1.70, 24008133)
print(aluno1.nome)
print(aluno1.matricula)

aluno1.estudar()