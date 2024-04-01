/*
Construa uma função template maxn( ) que receba um vetor de elementos de tipo
T e um inteiro representando o número de elementos no vetor e retorne o maior
elemento do vetor. Teste a função em um programa que crie um vetor de 6 inteiros
e outro de 4 doubles.
*/

#include <iostream>
using namespace std;

template <typename T>
T maxn(T *vetor, int n);

int main()
{
  int vetor_int[6] = {1, 2, 3, 4, 5, 6};
  double vetor_double[4] = {1.1, 2.2, 3.3, 4.4};

  cout << "Maior elemento do vetor de inteiros: " << maxn(vetor_int, 6) << endl;
  cout << "Maior elemento do vetor de doubles: " << maxn(vetor_double, 4) << endl;

  return 0;
}

template <typename T>
T maxn(T *vetor, int n)
{
  T maior = vetor[0];
  for (int i = 1; i < n; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  return maior;
}