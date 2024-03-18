/*
Escreva um programa para ler uma matriz 3x2, como a mostrada no exemplo
abaixo, e armazenar a sua transposta em uma matriz 2x3. Construa uma função
para exibir a matriz transposta.

Matriz 3x2:
1 7
3 5
4 6

Transposta 2x3:
1 3 4
7 5 6
*/

#include <iostream>
using namespace std;

int main()
{
  int matriz[3][2], transposta[2][3];
  cout << "Digite a matriz 3x2:" << endl;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 2; j++)
      cin >> matriz[i][j];
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 2; j++)
      transposta[j][i] = matriz[i][j];

  cout << "Matriz 3x2:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
      cout << matriz[i][j] << " ";
    cout << endl;
  }

  cout << "Transposta 2x3:" << endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
      cout << transposta[i][j] << " ";
    cout << endl;
  }
  return 0;
}