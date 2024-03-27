/*
Refaça o programa da questão anterior usando vetores comuns de const char *
para as strings representando os meses, e use um registro cujo único membro é
um vetor estático de double’s para os gastos.

Dica: esta organização é similar à usada pela classe array.
*/

#include <iostream>
using namespace std;

const char *Mes[] = {"Marco", "Abril", "Junho", "Julho"};

struct gastos
{
  double gastos[4];
};

void preencher(gastos *);
void mostrar(gastos);

int main()
{
  gastos g;
  preencher(&g);
  mostrar(g);
  return 0;
}

void preencher(gastos *g)
{
  for (int i = 0; i < 4; i++)
  {
    cout << "Entre com o gasto de " << Mes[i] << ": ";
    cin >> g->gastos[i];
  }
}

void mostrar(gastos g)
{
  double total = 0.0;
  cout << "\nGastos\n";
  for (int i = 0; i < 4; i++)
  {
    cout << Mes[i] << ": R$" << g.gastos[i] << endl;
    total += g.gastos[i];
  }
  cout << "Total de gastos: R$" << total << endl;
}