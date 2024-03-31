/*
Considerando o modelo de registro abaixo:

struct Caixa
{
  char marca[40];
  float altura;
  float largura;
  float comprimento;
  float volume;
};

a. Escreva uma função que receba uma referência para um registro caixa e
mostre o valor de cada membro.

b. Escreva uma função que receba uma referência para um registro caixa e
modifique o membro volume para o produto das suas dimensões.
*/

#include <iostream>
using namespace std;

struct Caixa
{
  char marca[40];
  float altura;
  float largura;
  float comprimento;
  float volume;
};

// a. Escreva uma função que receba uma referência para um registro caixa e mostre o valor de cada membro.
void mostrar(const Caixa &caixaExemploRef);

// b. Escreva uma função que receba uma referência para um registro caixa e modifique o membro volume para o produto das suas dimensões.
void calcularVolume(Caixa &caixaExemploRef);

int main()
{
  Caixa caixaExemplo = {"Caixa da Amazon", 10, 20, 30, 0};
  mostrar(caixaExemplo);
  calcularVolume(caixaExemplo);
  mostrar(caixaExemplo);
  return 0;
}

void mostrar(const Caixa &caixaExemploRef)
{
  cout << "Marca: " << caixaExemploRef.marca << endl;
  cout << "Altura: " << caixaExemploRef.altura << endl;
  cout << "Largura: " << caixaExemploRef.largura << endl;
  cout << "Comprimento: " << caixaExemploRef.comprimento << endl;
  cout << "Volume: " << caixaExemploRef.volume << endl;
}

void calcularVolume(Caixa &caixaExemploRef)
{
  caixaExemploRef.volume = caixaExemploRef.altura * caixaExemploRef.largura * caixaExemploRef.comprimento;
}
