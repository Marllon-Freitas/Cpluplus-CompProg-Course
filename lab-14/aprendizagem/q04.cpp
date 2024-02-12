/*
Crie um registro Imagem que contenha campos para nome, altura, largura e tipo,
sendo o tipo um dos seguintes valores: JPG, PNG ou BMP. Use uma enumeração
para guardar o tipo da imagem. No programa principal inicialize uma variável do
tipo Imagem e passe seu endereço para uma função Detalhes. A função deve
receber o endereço de uma Imagem e exibir os seus dados no formato do exemplo
abaixo.

A imagem “backg.png” com tamanho 1920x1080 tem formato PNG.

*/

#include <iostream>
using namespace std;

enum Tipo
{
  JPG,
  PNG,
  BMP
};

struct Imagem
{
  string nome;
  int altura;
  int largura;
  Tipo tipo;
};

void Detalhes(const Imagem *i);

int main()
{
  Imagem img = {"backg.png", 1920, 1080, PNG};
  Imagem *ptr = &img;

  Detalhes(ptr);

  return 0;
}

void Detalhes(const Imagem *i)
{
  cout << "A imagem \"" << i->nome << "\" com tamanho " << i->largura << "x" << i->altura << " tem formato ";
  switch (i->tipo)
  {
  case JPG:
    cout << "JPG";
    break;
  case PNG:
    cout << "PNG";
    break;
  case BMP:
    cout << "BMP";
    break;
  }
  cout << "." << endl;
}
