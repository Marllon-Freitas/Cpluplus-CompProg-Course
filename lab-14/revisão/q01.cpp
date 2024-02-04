/*
Suponha que litros é uma variável de tipo double. Declare um ponteiro que
aponte para litros e use o ponteiro para mostrar o valor de litros.

O valor de litros é 3.4

*/

#include <iostream>
using namespace std;

int main()
{
  double litros = 3.4;
  double *pLitros = &litros;

  cout << "O valor de litros é " << *pLitros << endl;

  return 0;
}
