/*
Dados dois pontos P e Q na tela do computador, calcule a distância entre eles
utilizando a fórmula: 𝐷𝑖𝑠𝑡â𝑛𝑐𝑖𝑎 = √(𝑄𝑥 − 𝑃𝑥)2 + (𝑄𝑦 − 𝑃𝑦)2

Ponto P:
5 8
Ponto Q:
20 4
A distância entre P e Q é: 15.5242
*/

#include <iostream>
#include <cmath>
using namespace std;

float disanciaEntrePontos(float Px, float Py, float Qx, float Qy)
{
	float distancia = sqrt(pow(Qx - Px, 2) + pow(Qy - Py, 2));
	return distancia;
}

int main()
{
	float Px, Py, Qx, Qy;
	cout << "Digite as coordenadas do ponto P: ";
	cin >> Px >> Py;
	cout << "Digite as coordenadas do ponto Q: ";
	cin >> Qx >> Qy;
	cout << "A distancia entre os pontos P e Q eh: " << disanciaEntrePontos(Px, Py, Qx, Qy) << endl;

	return 0;
}
