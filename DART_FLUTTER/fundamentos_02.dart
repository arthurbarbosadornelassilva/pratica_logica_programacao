// Gerar uma calculadora com histórico

import 'dart:core';
import 'dart:io';

// Etapa 1 - Criar funções para as operações básicas
double soma(double a, double b) => a + b;
double subtracao(double a, double b) => a - b;
double multiplicacao(double a, double b) => a * b;
double divisao(double a, double b) {
  if (b == 0)
    throw Exception('Impossível fazer divisão por 0!!');
  return a / b;
}

// Etapa 2 - Criar duas classes, uma que vai determinar os atributos da operacao e outra que vai criar o historico de operacoes
class operacao {
  final int id;
  final String expressao;
  final double resultado;

  operacao({required this.id, required this.expressao, required this.resultado});

  @override
  String toString() => "[$id] $expressao = $resultado";
}

class historico {
  final List<operacao> _operacoes = [];
  int _contadorId = 0;

  void adicionar(String expressao, double resultado) {
    _operacoes.add(operacao(id: ++_contadorId, expressao: expressao, resultado: resultado));
  }

  List<operacao> listar() => List.unmodifiable(_operacoes);
}

// Etapa 3 - Criar funções integradas com o histórico
double calculaSoma(double a, double b, historico h) {
  double resultado = soma(a, b);
  h.adicionar("$a + $b", resultado);
  var i = h.listar().last;

  print('\n Resultado da operação: $resultado / Id da operação: $i');
  return resultado;
}

double calculaSub(double a, double b, historico h) {
  double resultado = subtracao(a, b);
  h.adicionar("$a - $b", resultado);
  var i = h.listar().last;

  print('\n Resultado da operação: $resultado / Id da operação: $i');
  return resultado;
}

double calculaMulti(double a, double b, historico h) {
  double resultado = multiplicacao(a, b);
  h.adicionar("$a * $b", resultado);
  var i = h.listar().last;

  print('\n Resultado da operação: $resultado / Id da operação: $i');
  return resultado;
}

double calculaDiv(double a, double b, historico h) {
  double resultado = divisao(a, b);
  h.adicionar("$a / $b", resultado);
  var i = h.listar().last; 

  print('\n Resultado da operação: $resultado / Id da operação: $i');
  return resultado;
}

void main() {
  print("Calculadora com Memória\n\n");
  double infereOperacao = 0;
  historico h = historico();

  while (infereOperacao != 5) {
  print("*selecione a operação*\n 1- Soma \n 2- Subtração \n 3- Multiplicação \n 4- Divisão \n 5- SAIR \n");
  String? selecaoOperacao = stdin.readLineSync();
  infereOperacao = double.parse(selecaoOperacao!);

    switch(infereOperacao) {
      case(1):
        print('Insira o primeiro valor:');
          String? aString = stdin.readLineSync();
          double a = double.parse(aString!);

        print('Insira o segundo valor:');
          String? bString = stdin.readLineSync();
          double b = double.parse(bString!);

        calculaSoma(a, b, h);
      case(2):
        print('Insira o primeiro valor:');
          String? aString = stdin.readLineSync();
          double a = double.parse(aString!);

        print('Insira o segundo valor:');
          String? bString = stdin.readLineSync();
          double b = double.parse(bString!);

        calculaSub(a, b, h);
      case(3):
        print('Insira o primeiro valor:');
          String? aString = stdin.readLineSync();
          double a = double.parse(aString!);

        print('Insira o segundo valor:');
          String? bString = stdin.readLineSync();
          double b = double.parse(bString!);

        calculaMulti(a, b, h);
      case(4):
        print('Insira o primeiro valor:');
          String? aString = stdin.readLineSync();
          double a = double.parse(aString!);

        print('Insira o segundo valor:');
          String? bString = stdin.readLineSync();
          double b = double.parse(bString!);

        calculaDiv(a, b, h);
      case(5):
        infereOperacao == 5;
      
      default:
        print('Nenhuma opção de operação foi selecionada');
    }
  }
}