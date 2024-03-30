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

Então a chamada de função abaixo deve fazer calcular() passar os valores 2.5 e
10.3 para a função soma() e retornar o resultado de soma, que é 12.8 neste
exemplo.

double q = calcular(2.5, 10.3, soma);

Utilize estas funções e pelo menos mais uma função semelhante a soma() no
programa. O programa deve usar um laço que permita ao usuário digitar pares de
valores. Para cada par, use calcular() para chamar soma() e outra função.
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
  char op;

  do
  {
    cout << "Digite dois valores: ";
    cin >> x >> y;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
      cout << "Soma: " << calcular(x, y, soma) << endl;
      break;
    case '-':
      cout << "Subtração: " << calcular(x, y, subtracao) << endl;
      break;
    case '*':
      cout << "Multiplicação: " << calcular(x, y, multiplicacao) << endl;
      break;
    case '/':
      cout << "Divisão: " << calcular(x, y, divisao) << endl;
      break;
    default:
      cout << "Operação inválida!" << endl;
    }

    cout << "Deseja continuar? (s/n) ";
    cin >> op;
  } while (op == 's');

  return 0;
}