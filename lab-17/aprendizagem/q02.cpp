/*
Pergunte ao usuário "Você quer que eu conte de 1 até que número?". Use vários
laços for para gerar a saída abaixo, sendo cada linha gerada por um laço diferente
Você quer que eu conte de 1 até que número? 10
1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
1 3 5 7 9
9 7 5 3 1
2 4 6 8 10
10 8 6 4 2
*/

#include <iostream>
using namespace std;

int main()
{
  int numero;
  cout << "Você quer que eu conte de 1 até que número?" << endl;
  cin >> numero;
  for (int i = 1; i <= numero; i++)
  {
    cout << i << " ";
  }
  cout << endl;
  for (int i = numero; i > 0; i--)
  {
    cout << i << " ";
  }
  cout << endl;
  for (int i = 1; i <= numero; i += 2)
  {
    cout << i << " ";
  }
  cout << endl;
  for (int i = numero - 1; i > 0; i -= 2)
  {
    cout << i << " ";
  }
  cout << endl;
  for (int i = 2; i <= numero; i += 2)
  {
    cout << i << " ";
  }
  cout << endl;
  for (int i = numero; i > 0; i -= 2)
  {
    cout << i << " ";
  }
  return 0;
}