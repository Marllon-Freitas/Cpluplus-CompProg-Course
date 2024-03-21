/*
Suponha que o imposto de renda seja cobrado segundo as seguintes faixas:
- primeiros R$5000: 0% de imposto
- próximos R$10000: 10% de imposto
- próximos R$20000: 15% de imposto
- próximos R$30000: 20% de imposto
Por exemplo, alguém recebendo R$38000 pagaria:
5000 x 0.00 + 10000 x 0.10 + 20000 x 0.15 + 3000 x 0.20, ou seja, R$4600.
Construa um programa que use um laço para solicitar rendas e mostrar o imposto
devido. O laço deve encerrar quando o usuário digitar um valor negativo.
*/

#include <iostream>
using namespace std;

int main()
{
  int valorRecebido = 0, valorImposto = 0;

  cout << "Insira seus rendimentos (insira um valor negativo para encerrar): " << endl;
  while (!(valorRecebido < 0))
  {
    cin >> valorRecebido;
    if (valorRecebido <= 5000)
      valorImposto = 0;
    else if (valorRecebido <= 15000)
      valorImposto = 5000 * 0 + (valorRecebido - 5000) * 0.10;
    else if (valorRecebido <= 35000)
      valorImposto = 5000 * 0 + 10000 * 0.10 + (valorRecebido - 15000) * 0.15;
    else
      valorImposto = 5000 * 0 + 10000 * 0.10 + 20000 * 0.15 + (valorRecebido - 35000) * 0.20;
    cout << "Imposto devido: " << valorImposto << endl;
  }
  return 0;
}