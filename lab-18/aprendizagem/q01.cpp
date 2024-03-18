/*
O que o código abaixo iria exibir se ele fosse parte de um programa válido?

int i = 0;
while (++i < 4)
 cout << "Oi! ";
do
 cout << "Tchau! ";
while (i++ <= 8);

*/

#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  while (++i < 4)
    cout << "Oi! ";
  do
    cout << "Tchau! ";
  while (i++ <= 8);
  return 0;
}

// Resposta: Oi! Oi! Oi! Tchau! Tchau! Tchau! Tchau! Tchau! Tchau!