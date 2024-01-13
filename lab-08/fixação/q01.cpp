/*
Em um exercício anterior escrevemos uma função para calcular o IMC de uma
pessoa. A função recebe a altura da pessoa em metros, a sua massa corporal em
quilos e retorna seu Índice de Massa Corporal. O IMC é a massa dividida pelo
quadrado da altura.

Digite sua altura em metros: 1.75
Digite sua massa corporal em quilos: 80.0
Seu índice de massa corporal (IMC): 26.1224

*/

#include <iostream>
#include <cmath>

using namespace std;

float imc(float, float);

int main()
{
	float altura, massa;

	cout << "Digite sua altura em metros: ";
	cin >> altura;

	cout << "Digite sua massa corporal em quilos: ";
	cin >> massa;

	cout << "Seu índice de massa corporal (IMC): " << imc(altura, massa) << endl;

	return 0;
}

float imc(float altura, float massa)
{
	return massa / pow(altura, 2);
}
