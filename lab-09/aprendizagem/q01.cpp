/*
Considere que o trecho de código abaixo faz parte de um programa válido. Qual o
valor das variáveis após cada instrução de atribuição? Responda preenchendo a
tabela.

int a, b, c;
a = 1 + 2; // linha 1
b = 1 + a; // linha 2
c = 1 % 5; // linha 3
a = a + 2; // linha 4
b = a - c; // linha 5
b = 5 * c / 2; // linha 6

*/

#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  a = 1 + 2; // linha 1
  b = 1 + a; // linha 2
  c = 1 % 5; // linha 3
  a = a + 2; // linha 4
  b = a - c; // linha 5
  b = 5 * c / 2; // linha 6
  return 0;
}

/*
linha 1: a = 3 b = ? c = ?
linha 2: a = 3 b = 4 c = ?
linha 3: a = 3 b = 4 c = 1
linha 4: a = 5 b = 4 c = 1
linha 5: a = 5 b = 4 c = 1
linha 6: a = 5 b = 2 c = 1
*/