/*
Construa uma função calcular que use referências em seus parâmetros com o
objetivo de retornar mais de um valor ao programa principal. A função deve
receber um par de valores, definido pelo registro abaixo, e dois valores inteiros
que devem ser modificados para guardar, respectivamente a soma e a
multiplicação dos valores no par. Utilize const para os parâmetros que não serão
modificados dentro da função.

struct par { int x; int y;};

Digite um par de valores:
4 5
Soma: 9
Multiplicação: 20
*/

#include <iostream>
using namespace std;

struct par
{
  int x;
  int y;
};

void calcular(const par &p, int &soma, int &multiplicacao);

int main()
{
  par p;
  cout << "Digite um par de valores:" << endl;
  cin >> p.x >> p.y;
  int soma, multiplicacao;
  calcular(p, soma, multiplicacao);
  cout << "Soma: " << soma << endl;
  cout << "Multiplicação: " << multiplicacao << endl;
  return 0;
}

void calcular(const par &p, int &soma, int &multiplicacao)
{
  soma = p.x + p.y;
  multiplicacao = p.x * p.y;
}