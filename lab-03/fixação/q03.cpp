/*
Escreva um programa que leia sua idade em anos e converta-a para dias. O
programa deve exibir na tela ambos os valores, como no exemplo abaixo. 
Digite sua idade: 20
20 anos equivalem a 7300 dias.
*/

#include <iostream>
using namespace std;

int main()
{
  int idade;
  cout << "Digite sua idade: ";
  cin >> idade;
  cout << idade << " anos equivalem a " << idade * 365 << " dias." << endl;
  return 0;
}

