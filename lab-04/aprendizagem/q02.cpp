/*
Construa um programa que determine o seno de um ângulo dado pelo usuário.
Para achar o seno utilize a função sin(), definida na biblioteca cmath. Pesquise a
função sin() na Internet para saber como utilizá-la, isto é, para saber os tipos dos
parâmetros e valor de retorno.

Digite um ângulo: 90
Seno = 1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159265358979323846;
	double angulo, seno;

	cout << "Digite um angulo: ";
	cin >> angulo;

	seno = sin(angulo * PI / 180);

	cout << "Seno = " << seno << endl;

	return 0;
}