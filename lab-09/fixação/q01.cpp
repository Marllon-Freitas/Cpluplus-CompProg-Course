/*
Suponha que x1 e x2 são duas variáveis de tipo double que você deseja adicionar
como inteiros e atribuir a uma variável inteira. Construa uma instrução C++ que
faça isso usando type cast.

Digite o valor x1: 25.5
Digite o valor x2: 3.7
A adição inteira dos valores é 28.

*/

#include <iostream>
using namespace std;

int main()
{
  double x1, x2;
  int soma;

  cout << "Digite o valor x1: ";
  cin >> x1;
  cout << "Digite o valor x2: ";
  cin >> x2;

  soma = (int)x1 + (int)x2;

  cout << "A adição inteira dos valores é " << soma << endl;

  return 0;
}
