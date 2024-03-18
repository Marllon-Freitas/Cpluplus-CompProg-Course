/*
Crie um programa que leia a idade de pessoas até que seja digitado 0 (zero). Em
seguida exiba quantas pessoas são maiores de 18 anos.

Digite as idades do grupo:
15 20 14 32 17 0
Nesse grupo 2 pessoas são maiores de idade.

Desafio: mostre também a idade da pessoa mais nova e mais velha do grupo.
*/

#include <iostream>
using namespace std;

int main()
{
  int idade, qtdMaiores = 0, idadeMaisNova = 0, idadeMaisVelha = 0;
  cout << "Digite as idades do grupo:" << endl;
  cin >> idade;
  while (idade != 0)
  {
    if (idade > 18)
    {
      qtdMaiores++;
    }
    if (idadeMaisNova == 0 || idade < idadeMaisNova)
    {
      idadeMaisNova = idade;
    }
    if (idade > idadeMaisVelha)
    {
      idadeMaisVelha = idade;
    }
    cin >> idade;
  }
  cout << "Nesse grupo " << qtdMaiores << " pessoas são maiores de idade." << endl;
  cout << "A pessoa mais nova tem " << idadeMaisNova << " anos." << endl;
  cout << "A pessoa mais velha tem " << idadeMaisVelha << " anos." << endl;
  return 0;
}