/*
Faça um programa que receba o preço de um produto e seu código de origem e
mostre sua procedência. A procedência obedece a tabela a seguir:

Código de Origem Procedência
1 ou 2        Sul
3             Norte
4             Centro-oeste
5 ou 6        Nordeste
7 ou 8 ou 9   Sudeste

Se o código digitado pelo usuário não for nenhum dos especificados acima, mostre
a mensagem "Código Inválido".
*/

#include <iostream>
using namespace std;

int main()
{
  int codigo;
  cout << "Digite o código de origem do produto: ";
  cin >> codigo;

  switch (codigo)
  {
  case 1:
  case 2:
    cout << "Sul\n";
    break;
  case 3:
    cout << "Norte\n";
    break;
  case 4:
    cout << "Centro-oeste\n";
    break;
  case 5:
  case 6:
    cout << "Nordeste\n";
    break;
  case 7:
  case 8:
  case 9:
    cout << "Sudeste\n";
    break;
  default:
    cout << "Código Inválido\n";
  }

  return 0;
}