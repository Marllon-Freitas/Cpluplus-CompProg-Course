/*
Considerando o código abaixo:

#include <iostream>
#include <array>
#include <string>
using namespace std;
const array<string, 4> Mes = {"Marco", "Abril", "Junho", "Julho"};
void preencher(array<double, 4> *vet);
void mostrar(array<double, 4> vet);
int main()
{
  array<double, 4> gastos;
  preencher(&gastos);
  mostrar(gastos);
  return 0;
}
void preencher(array<double, 4> *vet)
{
  for (int i = 0; i < vet->size(); i++)
  {
    cout << "Entre com o gasto de " << Mes[i] << ": ";
    cin >> vet->at(i); // (*vet)[i];
  }
}
void mostrar(array<double, 4> vet)
{
  double total = 0.0;
  cout << "\nGastos\n";
  for (int i = 0; i < vet.size(); i++)
  {
    cout << Mes[i] << ": R$" << vet[i] << endl;
    total += vet[i];
  }
  cout << "Total de gastos: R$" << total << endl;
}


Faça uma versão do programa que use vetores comuns de const char * para as
strings representando os meses, e use um vetor comum de double’s para os
gastos.
*/

/*
Considerando o código abaixo:

#include <iostream>
#include <array>
#include <string>
using namespace std;
const array<string, 4> Mes = {"Marco", "Abril", "Junho", "Julho"};
void preencher(array<double, 4> *vet);
void mostrar(array<double, 4> vet);
int main()
{
  array<double, 4> gastos;
  preencher(&gastos);
  mostrar(gastos);
  return 0;
}
void preencher(array<double, 4> *vet)
{
  for (int i = 0; i < vet->size(); i++)
  {
    cout << "Entre com o gasto de " << Mes[i] << ": ";
    cin >> vet->at(i); // (*vet)[i];
  }
}
void mostrar(array<double, 4> vet)
{
  double total = 0.0;
  cout << "\nGastos\n";
  for (int i = 0; i < vet.size(); i++)
  {
    cout << Mes[i] << ": R$" << vet[i] << endl;
    total += vet[i];
  }
  cout << "Total de gastos: R$" << total << endl;
}


Faça uma versão do programa que use vetores comuns de const char * para as
strings representando os meses, e use um vetor comum de double’s para os
gastos.
*/

#include <iostream>
using namespace std;

const char *Mes[] = {"Marco", "Abril", "Junho", "Julho"};

void preencher(double vet[], int tamanho);
void mostrar(double vet[], int tamanho);

int main()
{
  double gastos[4];
  preencher(gastos, 4);
  mostrar(gastos, 4);
  return 0;
}

void preencher(double vet[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    cout << "Entre com o gasto de " << Mes[i] << ": ";
    cin >> vet[i];
  }
}

void mostrar(double vet[], int tamanho)
{
  double total = 0.0;
  cout << "\nGastos\n";
  for (int i = 0; i < tamanho; i++)
  {
    cout << Mes[i] << ": R$" << vet[i] << endl;
    total += vet[i];
  }
  cout << "Total de gastos: R$" << total << endl;
}