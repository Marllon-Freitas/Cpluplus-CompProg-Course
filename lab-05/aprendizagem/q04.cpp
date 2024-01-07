/*
As coordenadas polares representam um vetor pelo seu ângulo com o eixo
horizontal do plano cartesiano e pelo seu comprimento, também chamado de
norma ou módulo. O ângulo que o vetor forma com a horizontal pode ser
encontrado pelo arco tangente:
𝜃 = atan2 (
𝑦
𝑥
)
A função atan2 da biblioteca <cmath> retorna o ângulo em radianos. Para obter o
ângulo em graus é preciso fazer a conversão, multiplicando o resultado por 180 e
dividindo por PI.
Escreva uma função que receba as coordenadas (x,y) de um vetor e retorne seu
ângulo em graus.

Digite as coordenadas do vetor:
x: 10
y: 5
O ângulo do vetor é 26.5651 graus.

*/

#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265

float angulo(float x, float y);

int main()
{
	float x, y;
	cout << "Digite as coordenadas do vetor:" << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "O ângulo do vetor é " << angulo(x, y) << " graus." << endl;
}

float angulo(float x, float y)
{
	return atan2(y, x) * 180 / PI;
}

