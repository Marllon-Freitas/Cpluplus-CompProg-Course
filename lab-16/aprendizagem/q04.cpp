/*
Seja um vetor de inteiros B = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64 }, utilize um laço
for para exibir na tela os pares de números na configuração abaixo. Não use
ponteiros, trabalhe apenas com o índice do vetor

[32,64] [16,15] [47,28] [10,30] [82,29]

*/

#include <iostream>
using namespace std;

int main()
{
  int B[] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64};
  for (int i = 0; i < 5; i++)
  {
    cout << "[" << B[i] << "," << B[9 - i] << "] ";
  }
  cout << endl;
  return 0;
}