/*
Construa um programa que contenha um vetor inicializado como mostrado abaixo.
Utilize as funções strlen e sizeof para descobrir e exibir a quantidade de elementos
e o tamanho do vetor.

char nome[] = "C++ Primer Plus";

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char nome[] = "C++ Primer Plus";

  cout << "Quantidade de elementos: " << strlen(nome) << endl;
  cout << "Tamanho do vetor: " << sizeof(nome) << endl;

  return 0;
}
