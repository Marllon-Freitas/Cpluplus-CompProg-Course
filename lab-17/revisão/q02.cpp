/*
Escreva um laço for que exiba os valores 1 2 4 8 16 32 64 pelo incremento de uma
variável contador por um fator de 2 em cada ciclo
*/

#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 64; i *= 2)
  {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}