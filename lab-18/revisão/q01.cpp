/*
O que o código abaixo iria exibir se ele fosse parte de um programa válido?

int j = 5;
while (++j < 9)
 cout << j++ << endl;

*/

#include <iostream>
using namespace std;

int main() {
  int j = 5;
  while (++j < 9)
    cout << j++ << endl;
  return 0;
}

// Resposta: 6 8