/*
Declare um registro "Tigela" com os campos estado (cheia ou vazia) e tipo de
alimento (sopa ou canja). Crie uma função "Fome" que recebe um ponteiro para
uma Tigela e altera o seu estado para "vazia". Na função principal crie uma tigela
cheia, crie um ponteiro que aponta para essa tigela e então mostre como a tigela
estava antes da janta. Depois chame a função Fome com o ponteiro que aponta
para a tigela e ao fim mostre a tigela depois da janta.
*/

#include <iostream>
using namespace std;

enum Estado
{
  CHEIA,
  VAZIA
};
enum Alimento
{
  SOPA,
  CANJA
};

struct Tigela
{
  Estado estado;
  Alimento alimento;
};

void Fome(Tigela *t);

void MostrarTigela(const Tigela &t);

int main()
{
  Tigela t = {CHEIA, SOPA};
  Tigela *ptr = &t;

  cout << "Antes da janta:" << endl;
  MostrarTigela(t);

  Fome(ptr);

  cout << "Depois da janta:" << endl;
  MostrarTigela(t);

  return 0;
}

void MostrarTigela(const Tigela &t)
{
  cout << "Estado da tigela: " << (t.estado == CHEIA ? "Cheia" : "Vazia") << endl;
  cout << "Tipo de alimento: " << (t.alimento == SOPA ? "Sopa" : "Canja") << endl;
}

void Fome(Tigela *t)
{
  t->estado = VAZIA;
}