/*
A norma ou módulo de um vetor é um número real que representa o comprimento
desse vetor. Dessa forma, calcular a norma de um vetor é o mesmo que calcular a
distância entre um ponto (x,y) e a origem (0,0). Utilizando |v| como a notação para
o módulo de um vetor v = (x,y) pertencente ao plano, teremos:

|𝑣| = √𝑥² + 𝑦²

Crie uma função que receba as coordenadas (x,y) de um vetor e retorne seu
módulo. Inclua a biblioteca cmath e utilize as funções sqrt e pow para calcular raiz
quadrada e potenciação. 

Digite as coordenadas do vetor:
x: 10
y: 5
O tamanho do vetor é 11.1803

*/

#include <iostream>
#include <cmath>
using namespace std;

float modulo(float x, float y);

int main()
{
  float x, y;
  cout << "Digite as coordenadas do vetor:" << endl;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
  cout << "O tamanho do vetor é " << modulo(x, y) << endl;
}

float modulo(float x, float y)
{
  return sqrt(pow(x, 2) + pow(y, 2));
}