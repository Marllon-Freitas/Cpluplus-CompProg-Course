/*
Refaça a questão anterior modificando as funções para usar dois parâmetros
ponteiros que indiquem uma faixa de valores dentro do vetor. A função Preencher
deve retornar um ponteiro para a posição seguinte à última posição preenchida, no
lugar de retornar o número de valores armazenados. As outras funções podem
usar esse ponteiro como segundo argumento para identificar o fim dos dados.
*/

#include <iostream>
using namespace std;

const int TAMANHO = 10;

double *preencher(double *, double *);

void mostrar(double *, double *);

void inverter(double *, double *);

int main()
{
  double vetor[TAMANHO] = {0};
  double *fim = nullptr;

  fim = preencher(vetor, vetor + TAMANHO);

  mostrar(vetor, fim);

  if (fim - vetor > 2)
  {
    inverter(vetor + 1, fim - 2);
  }

  mostrar(vetor, fim);

  return 0;
}

double *preencher(double *inicio, double *fim)
{
  double valor = 0;

  cout << "Entre com até " << fim - inicio << " valores:" << endl;

  while (inicio < fim && cin >> valor)
  {
    *inicio++ = valor;
  }

  return inicio;
}

void mostrar(double *inicio, double *fim)
{
  for (double *ptr = inicio; ptr < fim; ptr++)
  {
    cout << *ptr << " ";
  }
  cout << endl;
}

void inverter(double *inicio, double *fim)
{
  double temp;
  while (inicio < fim)
  {
    temp = *inicio;
    *inicio = *fim;
    *fim = temp;
    inicio++;
    fim--;
  }
}