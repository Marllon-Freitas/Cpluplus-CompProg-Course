/*
Peça ao usuário para entrar com pares de números até que um dos valores do par
seja zero (ou até um máximo de 10 pares). O programa deve armazenar os pares
em um vetor. Escreva uma função que receba o vetor de pares e exiba os pares
colocando sempre o menor número como primeiro elemento do par. 

Digite pares de valores (0 para encerrar):
9 3
2 8
7 5
0
Pares organizados:
(3,9)
(2,8)
(5,7)
*/

#include <iostream>
using namespace std;

void organizarPares(int[][2], int);

int main()
{
  int pares[10][2] = {0};
  int i = 0;

  cout << "Digite pares de valores (0 para encerrar):" << endl;

  for (i = 0; i < 10; i++)
  {
    cin >> pares[i][0] >> pares[i][1];
    if (pares[i][0] == 0 || pares[i][1] == 0)
    {
      break;
    }
  }

  organizarPares(pares, i);

  cout << "Pares organizados:" << endl;

  for (int j = 0; j < i; j++)
  {
    cout << "(" << pares[j][0] << "," << pares[j][1] << ")" << endl;
  }

  return 0;
}

void organizarPares(int pares[][2], int tamanho)
{
  int temp = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (pares[i][0] > pares[i][1])
    {
      temp = pares[i][0];
      pares[i][0] = pares[i][1];
      pares[i][1] = temp;
    }
  }
}