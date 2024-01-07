/*
Agora construa um programa que utilize as funções das questões 3 e 4 para ler as
coordenadas de um vetor e mostrar suas coordenadas polares, isto é, seu
comprimento e ângulo.

Digite as coordenadas do vetor:
x: 10
y: 5
Coordenadas polares do vetor:
(11.1803, 26.5651)

Quando o programa estiver funcionando, separe-o em 3 arquivos: um arquivo
contendo apenas a função main(), um arquivo de inclusão contendo os protótipos
das funções e um arquivo fonte contendo as definições das funções.
*/

#include <iostream>
#include "q05.h"

using namespace std;

int main()
{
  float x, y;
  cout << "Digite as coordenadas do vetor:" << endl;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
  cout << "Coordenadas polares do vetor:" << endl;
  cout << "(" << modulo(x, y) << ", " << angulo(x, y) << ")" << endl;
}
