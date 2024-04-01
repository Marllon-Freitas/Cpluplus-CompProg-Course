/*
Considerando o modelo de registro abaixo:

struct Guloseima
{
  char marca[24];
  double peso;
  int calorias;
};

Escreva uma função que receba uma referência para um registro
Guloseima, um ponteiro para char, um double e um int e use os três
últimos argumentos como valores do registro. Os últimos parâmetros
devem ter os valores padrão “Charge”, 40.0, 187.

Escreva uma função que receba uma referência para um registro
Guloseima e exiba o seu conteúdo na tela. Use const sempre que for
apropriado.
*/

#include <iostream>
using namespace std;

struct Guloseima
{
  char marca[24];
  double peso;
  int calorias;
};

void preencheGuloseima(Guloseima &g, const char *marca = "Charge", double peso = 40.0, int calorias = 187);

void exibeGuloseima(const Guloseima &g);

int main()
{
  Guloseima g;
  preencheGuloseima(g);
  exibeGuloseima(g);
  return 0;
}

void preencheGuloseima(Guloseima &g, const char *marca, double peso, int calorias)
{
  for (int i = 0; i < 24; i++)
  {
    g.marca[i] = marca[i];
  }
  g.peso = peso;
  g.calorias = calorias;
}

void exibeGuloseima(const Guloseima &g)
{
  cout << "Marca: " << g.marca << endl;
  cout << "Peso: " << g.peso << endl;
  cout << "Calorias: " << g.calorias << endl;
}