/*
Escreva um programa que peça ao usuário para digitar dois números. Armazene o
primeiro número em um vetor de caracteres e o segundo em uma variável do tipo
inteira. Mostre o resultado da multiplicação entre os dois números. Para converter
a string para um número, pesquise sobre como usar a função atoi.

Entre com dois números: 3 5
A multiplicação entre eles é 15.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char numero1[100];
	int numero2;

	cout << "Entre com dois números: ";
	cin >> numero1 >> numero2;

	cout << "A multiplicação entre eles é " << atoi(numero1) * numero2 << endl;

	return 0;
}
