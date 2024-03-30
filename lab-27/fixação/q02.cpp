/*
Projete uma função calcular() que receba dois valores double e o endereço de
uma função e retorne o resultado da aplicação dessa função sobre os valores
recebidos. A função passada como argumento de calcular() deve receber dois
argumentos tipo double e retornar um valor double. Por exemplo, suponha a
definição:

double soma(double x, double y)
{
  return x * y;
}
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
  cout << "Digite dois valores: ";
  cin >> x >> y;
  cout << "Soma: " << calcular(x, y, soma) << endl;
  cout << "Subtração: " << calcular(x, y, subtracao) << endl;
  cout << "Multiplicação: " << calcular(x, y, multiplicacao) << endl;
  cout << "Divisão: " << calcular(x, y, divisao) << endl;
  return 0;
}