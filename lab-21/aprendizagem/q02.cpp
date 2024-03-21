/*
Crie um programa que receba um número inteiro maior que zero e determine se
ele é um número primo.
*/

#include <iostream>
using namespace std;

int main()
{
  int numero, divisores = 0;
  cout << "Digite um número inteiro maior que zero: ";
  cin >> numero;

  for (int i = 1; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      divisores++;
    }
  }

  if (divisores == 2)
  {
    cout << "O número " << numero << " é primo." << endl;
  }
  else
  {
    cout << "O número " << numero << " não é primo." << endl;
  }

  return 0;
}