/*
No programa anterior use um vetor de ponteiros para funções do estilo de soma()
e use um laço para sucessivamente aplicar calcular() em uma série de funções.

Dica: Aqui está a forma de declarar o vetor de ponteiros:

double (*pf[3]) (double, double);

É possível inicializar o vetor usando a notação de inicialização de vetores com os
nomes das funções.
*/

#include <iostream>
using namespace std;

double soma(double x, double y)
{
  return x + y;
}

double subtracao(double x, double y)
{
  return x - y;
}

double multiplicacao(double x, double y)
{
  return x * y;
}

double divisao(double x, double y)
{
  return x / y;
}

double calcular(double x, double y, double (*funcaoPassada)(double, double))
{
  return funcaoPassada(x, y);
}

int main()
{
  double x, y;

  double (*pf[4])(double, double) = {soma, subtracao, multiplicacao, divisao};

  cout << "Digite dois valores: ";
  cin >> x >> y;

  cout << "Resultados: " << endl;
  for (int i = 0; i < 4; i++)
  {
    cout << "Operação: " << calcular(x, y, pf[i]) << endl;
  }

  return 0;
}