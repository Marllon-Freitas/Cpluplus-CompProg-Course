/*
O ponto flutuante sofre do problema de precisão quando utilizado em operações
matemáticas. O resultado de uma operação pode extrapolar a capacidade da
mantissa (dígitos significativos) ou do expoente de um valor ponto flutuante.
Indique quais das operações abaixo vão ter problemas de precisão:
a) float a = 3.78575f * 8.129338f;
b) float b = 3e30f + 2e15f;
c) float c = 20518.56f * 2.0f;
d) float d = 3.14159f + 1.45f;
e) float e = 2.0f * 1e30f;
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // aceitando acentos no console
  system("chcp 1252 > nul");

  float a = 3.78575f * 8.129338f;
  float b = 3e30f + 2e15f;
  float c = 20518.56f * 2.0f;
  float d = 3.14159f + 1.45f;
  float e = 2.0f * 1e30f;

  cout << "a) float a = 3.78575f * 8.129338f; = " << a << endl;
  cout << "b) float b = 3e30f + 2e15f; = " << b << endl;
  cout << "c) float c = 20518.56f * 2.0f; = " << c << endl;
  cout << "d) float d = 3.14159f + 1.45f; = " << d << endl;
  cout << "e) float e = 2.0f * 1e30f; = " << e << endl;

  return 0;
}

/*
Os que possuem problemas de precisão são os itens b e e.
*/
