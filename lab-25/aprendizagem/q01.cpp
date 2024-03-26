/*
Construa uma função que receba dois ponteiros indicando uma faixa de elementos
dentro de um vetor e um valor inteiro e retorne quantas vezes esse valor acontece
dentro da faixa. Para testar a função construa um programa que inicializa um vetor
para os elementos { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 } e mostra a quantidade de zeros e
uns que tem dentro do vetor.

Existem 5 zeros e 6 uns na faixa indicada.

Sugestão: teste a função com outras faixas.
*/

#include <iostream>
using namespace std;

int contarZerosUns(int *, int *);

int main()
{
  const int tamVetor = 11;
  int vetor[tamVetor] = {0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0};
  int *inicio = vetor;
  int *fim = vetor + tamVetor;

  cout << "Existem " << contarZerosUns(inicio, fim) << " zeros e " << contarZerosUns(inicio + 1, fim) << " uns na faixa indicada." << endl;

  return 0;
}

int contarZerosUns(int *inicio, int *fim)
{
  int zeros = 0;
  int uns = 0;

  for (int *ptr = inicio; ptr < fim; ptr++)
  {
    if (*ptr == 0)
    {
      zeros++;
    }
    else
    {
      uns++;
    }
  }

  return *inicio == 0 ? zeros : uns;
}