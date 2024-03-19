/*
Escreva um programa que use um laço para ler a velocidade de 10 carros para um
vetor de inteiros. Conte quantos carros ultrapassaram o limite de 80Km/h,
calcule o valor total arrecadado em multas e o valor de multa que cada um deve
pagar. A multa é de R$8 por km excedido.

As últimas 10 velocidades registradas:
20 55 48 76 81 94 92 48 52 85
81 Km/h excede o limite = multa de R$8
94 Km/h excede o limite = multa de R$112
92 Km/h excede o limite = multa de R$96
85 Km/h excede o limite = multa de R$40

4 carros foram multados em um valor total de R$256.
*/

#include <iostream>
using namespace std;

int main()
{
  const int VALOR_MULTA_POR_KM = 8;
  int velocidadeCarros[10], totalValorMulta = 0, qtdCarrosMultados = 0;

  cout << "As últimas 10 velocidades registradas: " << endl;

  for (int i = 0; i < 10; i++)
  {
    cin >> velocidadeCarros[i];
    if (velocidadeCarros[i] > 80)
    {
      int valorMulta = (velocidadeCarros[i] - 80) * VALOR_MULTA_POR_KM;
      qtdCarrosMultados++;
      cout << velocidadeCarros[i] << " Km/h excede o limite = multa de R$"
           << valorMulta << endl;
      totalValorMulta += valorMulta;
    }
  }
  cout << endl;
  cout << qtdCarrosMultados << " carros foram multados em um valor total de R$"
       << totalValorMulta << endl;

  return 0;
}