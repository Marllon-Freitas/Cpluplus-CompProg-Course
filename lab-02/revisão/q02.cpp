/*
Repita o exercício anterior usando um cout para exibir cada linha.
Depois crie outra versão que continue a usar três cout’s, porém com o texto aparecendo na mesma linha, como mostrado abaixo.

----------------------------------
Bem-vindo ao mundo do C++
----------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "In only one line: " << endl;

  cout << "Welcome ";
  cout << "to the world ";
  cout << "of C++!" << endl;

  return 0;
}