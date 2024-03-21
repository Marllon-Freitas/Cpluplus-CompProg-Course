/*
Cada novo termo na sequência de Fibonacci é gerado por uma adição entre os dois
últimos termos. Começando com os números 1 e 2, os 10 primeiros termos serão:
1, 2, 3, 5, 8, 13, 21, 34, 55 e 89. Considerando todos os termos da sequência de
Fibonacci menores que quatro milhões, encontre a soma dos termos pares.
*/

#include <iostream>
using namespace std;

int main()
{
  int soma = 0, termo1 = 1, termo2 = 2, termo3 = 0;
  while (termo3 < 4000000)
  {
    termo3 = termo1 + termo2;
    if (termo3 % 2 == 0)
    {
      soma += termo3;
    }
    termo1 = termo2;
    termo2 = termo3;
  }
  cout << "A soma dos termos pares da sequência de Fibonacci menores que quatro milhões é " << soma << endl;
  return 0;
}