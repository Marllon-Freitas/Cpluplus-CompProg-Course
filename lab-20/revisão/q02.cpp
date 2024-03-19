/*
Em que situações a variável “a” assumirá os valores 1, 4 e 8? Existe alguma chance
de “a” ter um valor diferente dos mencionados, isto é, o valor de “a” sempre será
modificado na execução deste código?

if (z <= 10)
 a = 1;
else
  if (z <= 20)
    a = 4;
  else
    if (z <= 50)
      a = 8;
*/

#include <iostream>
using namespace std;

int main()
{
  int z;
  int a;
  cout << "Digite um valor para z: ";
  cin >> z;
  if (z <= 10)
    a = 1;
  else if (z <= 20)
    a = 4;
  else if (z <= 50)
    a = 8;
  cout << "a = " << a << endl;
  return 0;
}

// Resposta:
// A variável "a" assumirá os valores 1, 4 e 8 quando z for menor ou igual a 10, entre
// 11 e 20 e entre 21 e 50, respectivamente.
// Se z for maior que 50, a variável "a" não será modificada.