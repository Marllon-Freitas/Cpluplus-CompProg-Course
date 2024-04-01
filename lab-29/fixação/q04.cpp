/*
Construa uma função template max5( ) que receba um vetor de 5 elementos de
tipo T e retorne o maior elemento do vetor. Como o tamanho do vetor é fixo, não
há necessidade de receber o tamanho do vetor por parâmetro. Teste a função em
um programa que crie um vetor de 5 inteiros e outro de 5 doubles.
*/

#include <iostream>
using namespace std;

template <typename T>
T max5(T *vetor);

int main()
{
  int vetor_int[5] = {1, 2, 3, 4, 5};
  double vetor_double[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

  cout << "Maior elemento do vetor de inteiros: " << max5(vetor_int) << endl;
  cout << "Maior elemento do vetor de doubles: " << max5(vetor_double) << endl;

  return 0;
}

template <typename T>
T max5(T *vetor)
{
  T maior = vetor[0];
  for (int i = 1; i < 5; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  return maior;
}