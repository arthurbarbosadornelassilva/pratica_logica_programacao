// MATERIAL USADO PRA ESTUDOS PRA P1 - Dev Multiplataforma
// Usando listas e loops pt.2

import 'dart:io';
void main() {
  List<String> contatos = [];
  int selecaoOperacao = 0;

  while (selecaoOperacao != 5) {
    print('Gerenciador de Contatos:\n\n *SELECIONE A OPERAÇÃO*\n1-)Add\n2-)Rem\n3-)Buscar\n4-)Ver Contatos\n');
    String? operacao = stdin.readLineSync();
    selecaoOperacao = int.parse(operacao!);
    switch (selecaoOperacao) {
      case(1):
        String? contato = stdin.readLineSync();
        if (contatos.contains(contato))
          print("Este contato já existe na agenda!");
        contatos.add(contato!);
        
      case(2):
        String? contato = stdin.readLineSync();
        if (contatos.contains(contato))
          contatos.remove(contato!);
        print("Este contato NÃO existe na agenda!");

      case(3):
        String? contato = stdin.readLineSync();
        if (contatos.contains(contato))
          print('O contato $contato existe em [$contatos]');
        else
          print('O contato inserido não existe');

      case(4):
        // uso de loop 'for'
        for (int i = 0; i < contatos.length; i++) {
          print(contatos[i]);
        }

      default:
        print('Nenhuma operação foi selecionada!');
        break;
    }
  }
}