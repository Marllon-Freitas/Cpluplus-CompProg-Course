/*
Escreva um programa que ache a média dos elementos de uma matriz (vetor
bidimensional) com 5 linhas e 5 colunas. A matriz deve ser inicializada no
programa para os 25 valores inteiros dados abaixo.

38 51 50 56 98
17 65 25 62 54
23 23 64 45 92
41 39 19 68 87
65 10 12 22 13
*/

#include <iostream>
using namespace std;

int main()
{
  int matriz[5][5] = {
      {38, 51, 50, 56, 98},
      {17, 65, 25, 62, 54},
      {23, 23, 64, 45, 92},
      {41, 39, 19, 68, 87},
      {65, 10, 12, 22, 13}};
  int somatorio = 0;
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++)
      somatorio += matriz[i][j];
  cout << "A média dos elementos da matriz é " << (float)somatorio / 25 << "." << endl;
  return 0;
}