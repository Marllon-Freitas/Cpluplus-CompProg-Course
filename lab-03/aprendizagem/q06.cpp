/*
Construa um programa que calcule a área da base e o volume de um prisma
retangular. Primeiro, peça ao usuário os valores dos lados da base do prisma.
Calcule a área da base, atribua a uma variável e mostre o valor desta variável.
Depois, peça a altura do prisma, use a fórmula 𝑉 = 𝐴𝑏ℎ para calcular o volume do
prisma, atribua este valor a outra variável e mostre o resultado.

Lado a: 10
Lado b: 8
Área da base = 80
Altura: 3
Volume do prisma = 240
*/

#include <iostream>
using namespace std;

int main()
{
	float ladoA, ladoB, areaBase, altura, volume;
	cout << "Digite o lado A: ";
	cin >> ladoA;
	cout << "Digite o lado B: ";
	cin >> ladoB;
	areaBase = ladoA * ladoB;
	cout << "Área base = " << areaBase << endl;
	cout << "Digite a altura: ";
	cin >> altura;
	volume = areaBase * altura;
	cout << "O volume do prisma é " << volume << endl;

	return 0;
}