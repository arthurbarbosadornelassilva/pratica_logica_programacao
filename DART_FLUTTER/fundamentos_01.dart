// Testando um algoritmo recursivo simples: Fatorial

import 'dart:core';

int fatorial(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fatorial(n - 1);
  }
}

void main() {
  var stopwatch = Stopwatch();
  stopwatch.start(); // Inicia a cronometragem

  var teste = fatorial(5);
  print('Fatorial de 5 é: $teste');

  stopwatch.stop(); // Para a cronometragem
  print('Tempo decorrido: ${stopwatch.elapsed}');
}