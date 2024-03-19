/*
Desenvolva um programa que pergunte a distância de uma viagem em
quilômetros. Calcule o preço da passagem, usando R$0,50 por Km para viagens de
até 200Km, R$0,40 por Km para viagens até 400Km, e R$0,30 por Km para viagens
mais longas.
*/

#include <iostream>
using namespace std;

int main()
{
  float distancia, preco;

  cout << "Digite a distância da viagem em quilômetros: ";
  cin >> distancia;

  if (distancia <= 200)
  {
    preco = distancia * 0.5;
  }
  else if (distancia <= 400)
  {
    preco = distancia * 0.4;
  }
  else
  {
    preco = distancia * 0.3;
  }

  cout << "O preço da passagem é R$ " << preco << endl;

  return 0;
}