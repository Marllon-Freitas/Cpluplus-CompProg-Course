/*
Construa um programa para exibir a tabuada de qualquer número n, sendo n um
número fornecido pelo usuário.
Tabuada de n
------------
Entre com um número n (0 a 9): 2
2 x 0 = 0
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
*/

#include <iostream>
using namespace std;

int main()
{
  int numero;
  cout << "Entre com um número n (0 a 9): ";
  cin >> numero;
  cout << "Tabuada de " << numero << "\n";
  cout << "------------ \n";
  for (int i = 0; i <= 9; i++)
  {
    cout << numero << " x " << i << " = " << numero * i << endl;
  }
  return 0;
}