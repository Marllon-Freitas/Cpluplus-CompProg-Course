/*
Escreva um programa que peça ao usuário para entrar com dois números. O
programa deve usar uma função para calcular a média harmônica dos números e
retornar esse resultado para a função principal, que deve então apresentar o
resultado na tela.

Entre com um número: 4.4
Entre com outro número: 6.2
A média harmônica dos números é 5.14717

A média harmônica de dois números x e y é igual a 2.0 * x * y / (x+y).

*/

#include <iostream>
using namespace std;

float mediaHarmonica(float x, float y);

int main()
{
  float x, y;
  cout << "Entre com um número: ";
  cin >> x;
  cout << "Entre com outro número: ";
  cin >> y;
  cout << "A média harmônica dos números é " << mediaHarmonica(x, y) << endl;
}

float mediaHarmonica(float x, float y)
{
  return 2.0 * x * y / (x+y);
}
