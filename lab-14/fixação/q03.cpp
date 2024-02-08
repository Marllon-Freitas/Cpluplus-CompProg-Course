/*
Construa duas funções que realizem o incremento de um número em uma unidade.
A função Mais deve receber um número inteiro através de um ponteiro. A função
Incrementa deve receber um valor inteiro, sem usar ponteiros, e retornar o valor
incrementado em uma unidade. Utilize as duas funções como no exemplo abaixo:

Digite um valor: 7
Resultado após Mais: 8
Resultado após Incrementa: 9

*/

#include <iostream>
using namespace std;

void Mais(int *);

int Incrementa(int);

int main()
{
  int n;
  cout << "Digite um valor: ";
  cin >> n;
  Mais(&n);
  cout << "Resultado após Mais: " << n << endl;
  cout << "Resultado após Incrementa: " << Incrementa(n) << endl;
}

void Mais(int *n)
{
  (*n)++;
}

int Incrementa(int n)
{
  return n + 1;
}
