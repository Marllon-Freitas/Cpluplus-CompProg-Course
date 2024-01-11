/*
Construa uma função bitsAltos que utiliza uma máscara de bits para retornar
apenas os 16 bits de ordem mais alta de um número tipo int. Teste a função
passando um valor inteiro digitado pelo usuário e mostrando o número retornado.

Digite um valor inteiro: 350000
Os 16 bits mais altos desse valor correspondem ao número 5.

*/

#include <iostream>
using namespace std;

int bitsAltos(int);

int main()
{
  int n;
  cout << "Digite um valor inteiro: ";
  cin >> n;
  cout << "Os 16 bits mais altos desse valor correspondem ao número " << bitsAltos(n) << endl;
  return 0;
}

int bitsAltos(int n)
{
  return (n >> 16) & 0xFFFF;
}
