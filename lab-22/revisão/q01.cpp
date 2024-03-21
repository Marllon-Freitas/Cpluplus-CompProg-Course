/*
Construa uma expressão condicional para obter o valor absoluto de uma variável.
Isto é, se a variável x é positiva, o valor da expressão deve ser x, mas se x é
negativa, o valor da expressão deve ser –x, tornado a expressão positiva.

Digite um número positivo ou negativo: -5
O valor absoluto de -5 é 5.
*/

#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Digite um número positivo ou negativo: ";
  cin >> x;

  cout << "O valor absoluto de " << x << " é " << (x < 0 ? -x : x) << "." << endl;

  return 0;
}
