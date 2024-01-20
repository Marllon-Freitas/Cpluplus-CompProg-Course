/*
Escreva um programa que crie um vetor vetA de 5 elementos inteiros,
inicializando-os para os valores 10, 20, 30, 40 e 50. Crie um segundo vetor vetB
inicializando apenas os dois primeiros elementos para 10 e 20 e todos os demais
elementos para zero. Crie um terceiro vetor vetC inicializando apenas o terceiro
elemento para o valor 30 e os demais para zero. Exiba os valores contidos em cada
vetor para conferir os valores armazenados:

Vetor A: 10 20 30 40 50
Vetor B: 10 20 0 0 0
Vetor C: 0 0 30 0 0

*/

#include <iostream>
using namespace std;

int main()
{
	int vetA[5] = { 10, 20, 30, 40, 50 };
	int vetB[5] = { 10, 20 };
	int vetC[5] = { 0, 0, 30 };

	cout << "Vetor A: ";
	for (int i = 0; i < 5; i++)
	{
		cout << vetA[i] << " ";
	}
	cout << endl;

	cout << "Vetor B: ";
	for (int i = 0; i < 5; i++)
	{
		cout << vetB[i] << " ";
	}
	cout << endl;

	cout << "Vetor C: ";
	for (int i = 0; i < 5; i++)
	{
		cout << vetC[i] << " ";
	}
	cout << endl;

	return 0;
}
