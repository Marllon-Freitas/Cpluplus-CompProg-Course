/*
Escreva um programa para ler dois números inteiros x e y, e exibir o quociente e o
resto da divisão inteira entre eles.

Digite dois números inteiros: 11 4
O quociente 11/4 é 2
O resta da divisão 11%4 é 3

*/

#include <iostream>
using namespace std;

int main()
{
  system("chcp 1252 > nul");
  int x, y, quociente, resto;

  cout << "Digite dois números inteiros: ";
  cin >> x >> y;

  quociente = x / y;
  resto = x % y;

  cout << "O quociente " << x << "/" << y << " é " << quociente << endl;
  cout << "O resta da divisão " << x << "%" << y << " é " << resto << endl;

  return 0;
}
