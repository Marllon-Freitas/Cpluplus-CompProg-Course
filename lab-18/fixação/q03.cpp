/*
Daiane investiu R$100 com 10% de rendimento. Isto é, a cada ano, o rendimento é
de 10% do valor original investido, ou seja, R$10 de ganho todo ano:
rendimento de Daiane = 0.10 x investimento original
No mesmo instante, Célia investiu R$100 com 5% de rendimento combinado. Isto
é, o rendimento é 5% do saldo atual, incluindo os rendimentos passados:
rendimento de Célia = 0.05 x saldo atual
Célia ganha 5% de R$100 no primeiro ano, dando a ela R$105 de saldo. No ano
seguinte ela ganha 5% de R$105, dando a ela R$110.25, e assim por diante.
Escreva um programa que ache quantos anos leva para o saldo de Célia ultrapassar
o saldo de Daiane e mostre o valor dos saldos neste instante.

Se passaram 27 anos para os saldos atingirem os valores
Daiane: 370.00
Celia : 373.35

*/

#include <iostream>
using namespace std;

int main()
{
  float investimentoDaiane = 100.0;
  float investimentoCelia = 100.0;
  float rendimentoDaiane = 0.10;
  float rendimentoCelia = 0.05;
  int anos = 0;

  while (investimentoDaiane >= investimentoCelia)
  {
    investimentoDaiane += 0.10 * 100;
    investimentoCelia += 0.05 * investimentoCelia;
    anos++;
  }

  cout << "Se passaram " << anos << " anos para os saldos atingirem os valores" << endl;
  cout << fixed;
  cout.precision(2);
  cout << "Daiane: " << investimentoDaiane << endl;
  cout << "Celia : " << investimentoCelia << endl;

  return 0;
}