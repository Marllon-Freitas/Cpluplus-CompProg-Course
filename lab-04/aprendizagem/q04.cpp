/*
O volume de um cilindro é dado pela fórmula V = πr
2h, onde r é o raio da base, h é a
altura do cilindro e π é 3.14159. Escreva uma função chamada VolumeCilindro()
que recebe a altura e o raio da base e retorna o volume do cilindro. Escreva um
programa principal que leia a altura e o raio de um cilindro, use a função
VolumeCilindro() para achar o seu volume e então mostre o resultado na tela.

Calcula o Volume de um Cilindro
-------------------------------
Entre com o raio da base: 10
Entre com a altura: 5
O volume do cilindro é 1570.795

*/

#include <iostream>
#include <cmath>
using namespace std;

float volumeCilindro(float raio, float altura)
{
	const float PI = 3.14159265358979323846;
	return PI * pow(raio, 2) * altura;
}

int main()
{
	float raio, altura;
	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "-------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;
	cout << "O volume do cilindro é: " << volumeCilindro(raio, altura) << endl;
	return 0;
}