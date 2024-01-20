/*
Escreva um programa que leia um número real e exiba sua parte inteira e sua
parte fracionária, como no exemplo abaixo:

Digite um número real: 10.5
A parte inteira: 10
A parte fracionária: 0.5

*/

#include <iostream>

using namespace std;

int main()
{
  double numero, parteFracionaria;
  int parteInteira;

  cout << "Digite um número real: ";
  cin >> numero;

  parteInteira = numero;
  parteFracionaria = numero - parteInteira;

  cout << "A parte inteira: " << parteInteira << endl;
  cout << "A parte fracionária: " << parteFracionaria << endl;

  return 0;
}
