/*
Construa uma função que receba dois vetores de inteiros, e crie um vetor dinâmico
com o conteúdo dos dois vetores. A função deve retornar o endereço do vetor
resultante, que deve ser exibido na tela pelo programa principal.

Vetor A: 1 4 5 7
Vetor B: 3 2 8 9
União: 1 4 5 7 3 2 8 9

Dica: não esqueça de liberar a memória utilizada pelo vetor dinâmico.
*/

#include <iostream>
using namespace std;

int *unir(int[], int, int[], int);

int main()
{
  int vetorA[] = {1, 4, 5, 7};
  int vetorB[] = {3, 2, 8, 9};
  int tamanhoA = sizeof(vetorA) / sizeof(vetorA[0]);
  int tamanhoB = sizeof(vetorB) / sizeof(vetorB[0]);

  int *vetorUniao = unir(vetorA, tamanhoA, vetorB, tamanhoB);

  cout << "Vetor A: ";
  for (int i = 0; i < tamanhoA; i++)
  {
    cout << vetorA[i] << " ";
  }
  cout << endl;

  cout << "Vetor B: ";
  for (int i = 0; i < tamanhoB; i++)
  {
    cout << vetorB[i] << " ";
  }
  cout << endl;

  cout << "União: ";
  for (int i = 0; i < tamanhoA + tamanhoB; i++)
  {
    cout << vetorUniao[i] << " ";
  }
  cout << endl;

  delete[] vetorUniao;

  return 0;
}

int *unir(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB)
{
  int *vetorUniao = new int[tamanhoA + tamanhoB];

  for (int i = 0; i < tamanhoA; i++)
  {
    vetorUniao[i] = vetorA[i];
  }

  for (int i = 0; i < tamanhoB; i++)
  {
    vetorUniao[tamanhoA + i] = vetorB[i];
  }

  return vetorUniao;
}