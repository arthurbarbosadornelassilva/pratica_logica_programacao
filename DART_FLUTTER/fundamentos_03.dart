// MATERIAL USADO PRA ESTUDOS PRA P1 - Dev Multiplataforma
// Usando listas e loops

import 'dart:io';

class dadoContato {
  String nome;
  String numero;
  dadoContato({required this.nome, required this.numero});

  @override
  String toString() => "$nome --> n° contato: $numero\n";
}
class contatos {
  List<dadoContato> _contatos = [];

  void adicionar(String nome, String numero) {
    _contatos.add(dadoContato(nome: nome, numero: numero));
  }
  void remover(String nome, String numero) {
    _contatos.remove(dadoContato(nome: nome, numero: numero));
  }
  bool buscar(String nome, String numero) {
    bool existe = _contatos.contains(dadoContato(nome: nome, numero: numero));

    return existe;
  }
  List<String> listarContato() => List.unmodifiable(_contatos);
}

void main() {
  contatos c = contatos();
  int selecOperacao = 0;

  print("Gerenciador de Contatos:\n");
  print("*selecione a operação*\n 1-Add. Contato \n 2-Remover Contato \n 3-Burcar Contato \n 4-Exibir Lista Completa \n 5- SAIR \n");
  String? operacao = stdin.readLineSync();
  selecOperacao = int.parse(operacao!);
  
  switch(selecOperacao) {
    case(1):
      String? nome = stdin.readLineSync();
      String? numero = stdin.readLineSync();

      if (nome == null || numero == null) {
        print("Valor nulo inválido!");
        Error();
      }
      c.adicionar(nome!, numero!);
      print('Contato Adicionado');

    case(2):
      String? nome = stdin.readLineSync();
      String? numero = stdin.readLineSync();
      
      if (nome == null || numero == null) {
        print("Valor nulo inválido!");
        Error();
      }
      c.remover(nome!, numero!);
      print('Contato Removido');

    case(3):
      String? nome = stdin.readLineSync();
      String? numero = stdin.readLineSync();
      
      if (nome == null || numero == null) {
        print("Valor nulo inválido!");
        Error();
      }
      if (c.buscar(nome!, numero!) == true) {
        print('O Contato existe na lista: $nome// $numero');
      }
      print('Contato não existe na lista de contatos');
      
    case(4):
      print(c.listarContato());

    default:
        print('Nenhuma opção de operação foi selecionada');
  }
}