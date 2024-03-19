/*
Escreva um programa que utilize laços for aninhados para calcular e mostrar a
soma das colunas de um vetor bidimensional 4x4, como mostrado no exemplo
abaixo. A matriz deve ser inicializada no momento da sua declaração.

3 1 5 5
1 5 5 6
2 3 4 5
4 9 1 8

A soma das colunas é: 10 18 15 24
*/

#include <iostream>
using namespace std;

int main()
{
  int matriz[4][4] = {
      {3, 1, 5, 5},
      {1, 5, 5, 6},
      {2, 3, 4, 5},
      {4, 9, 1, 8}};
  int somaColunas[4] = {0, 0, 0, 0};

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      somaColunas[j] += matriz[i][j];
    }
  }

  cout << "A soma das colunas é: ";
  for (int i = 0; i < 4; i++)
  {
    cout << somaColunas[i] << " ";
  }
  cout << endl;
  return 0;
}