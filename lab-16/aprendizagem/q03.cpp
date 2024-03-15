/*
Seja um vetor de inteiros A = {46, 78, 40, 96, 74, 58, 32, 56, 91, 6}, utilize dois
ponteiros em conjunto com um laço for para exibir na tela os pares de números: 

[46,78] [40,96] [74,58] [32,56] [91,6]

*/

#include <iostream>
using namespace std;

int main()
{
  int A[] = {46, 78, 40, 96, 74, 58, 32, 56, 91, 6};
  int *p1 = A, *p2 = A + 1;
  for (int i = 0; i < 5; i++)
  {
    cout << "[" << *p1 << "," << *p2 << "] ";
    p1 += 2;
    p2 += 2;
  }
  cout << endl;
  return 0;
}