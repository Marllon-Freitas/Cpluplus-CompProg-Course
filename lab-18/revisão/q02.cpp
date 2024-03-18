/*
O que o código abaixo iria exibir se ele fosse parte de um programa válido?

int k = 4;
do
 cout << " k = " << k << endl;
while (k++ < 5);

*/

#include <iostream>
using namespace std;

int main() {
  int k = 4;
  do
    cout << " k = " << k << endl;
  while (k++ < 5);
  return 0;
}

// Resposta: 
// k = 4
// k = 5