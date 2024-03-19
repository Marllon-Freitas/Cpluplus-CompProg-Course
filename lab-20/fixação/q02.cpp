/*
Escreva um programa que solicite três números inteiros a, b e c. Informe ao
usuário que “a” deve ser maior que 1. Seu programa deve passar os valores para
uma função que deve retornar a soma de todos os inteiros entre [b e c] que sejam
divisíveis por a.

Digite três números inteiros a, b e c ("a" maior que 1):
2 4 10
A soma é igual a 28.
*/

#include <iostream>
using namespace std;

int somaValoresEntreBeC(int, int, int);

int main()
{
  int a, b, c;
  cout << "Digite três números inteiros a, b e c ('a' maior que 1): " << endl;
  cin >> a;
  if (a <= 1)
  {
    cout << "O valor digitado para 'a' é menor ou igual a 1" << endl;
    return 1;
  }

  cin >> b >> c;
  cout << "A soma é igual a " << somaValoresEntreBeC(a, b, c) << endl;
  return 0;
}

int somaValoresEntreBeC(int a, int b, int c)
{
  int somaValores = 0;
  for (int i = b; i <= c; i++)
  {
    if (i % a == 0)
    {
      somaValores += i;
    }
  }
  return somaValores;
}