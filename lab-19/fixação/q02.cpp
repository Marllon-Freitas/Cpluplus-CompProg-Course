/*
Escreva um programa que utilize um laço para calcular o resultado da expressão
abaixo para os valores de ni dados na tabela. Para isso armazene a tabela em um
vetor e processe o vetor com um laço.
Σ ni, onde i = 0 até 9
n0 n1 n2 n3 n4 n5 n6 n7 n8 n9
0  1  0  0  1  0  1  1  1  1
*/

#include <iostream>
using namespace std;

int main()
{
  int n[] = {0, 1, 0, 0, 1, 0, 1, 1, 1, 1};
  int somatorio = 0;
  for (int i = 0; i < 10; i++)
    somatorio += n[i];
  cout << "O resultado da expressão é " << somatorio << "." << endl;
  return 0;
}