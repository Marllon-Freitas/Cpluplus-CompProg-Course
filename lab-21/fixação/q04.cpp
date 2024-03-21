/*
Crie um programa que simule o funcionamento de um caixa eletrônico. Pergunte
ao usuário qual o valor a ser sacado (valor inteiro) e o programa deve informar
quantas cédulas de cada valor serão entregues. Considere que o caixa possui
cédulas de R$50, R$20, R$10 e R$5

Caixa Eletrônico
----------------
Saque: 235
Entregando:
4 cédula(s) de R$50
1 cédula(s) de R$20
1 cédula(s) de R$10
1 cédula(s) de R$5
*/

#include <iostream>
using namespace std;

int main()
{
  int valorSaque = 0, cedulas50 = 0, cedulas20 = 0, cedulas10 = 0, cedulas5 = 0;

  cout << "Caixa Eletrônico" << endl;
  cout << "----------------" << endl;
  cout << "Saque: ";
  cin >> valorSaque;

  cedulas50 = valorSaque / 50;
  valorSaque = valorSaque % 50;
  cedulas20 = valorSaque / 20;
  valorSaque = valorSaque % 20;
  cedulas10 = valorSaque / 10;
  valorSaque = valorSaque % 10;
  cedulas5 = valorSaque / 5;

  cout << "Entregando:" << endl;
  cout << cedulas50 << " cédula(s) de R$50" << endl;
  cout << cedulas20 << " cédula(s) de R$20" << endl;
  cout << cedulas10 << " cédula(s) de R$10" << endl;
  cout << cedulas5 << " cédula(s) de R$5" << endl;

  return 0;
}