/*
Construa uma função que receba um vetor de cinco elementos inteiros e retorne a
soma dos elementos do vetor. Construa um programa para testar a função, como
mostrado abaixo:

Digite 5 valores: 2 3 5 4 6
A soma do vetor é 20.

*/

#include <iostream>
using namespace std;

int somaVetor(int vet[], int tam);

int main()
{
	int vet[5];
	cout << "Digite 5 valores: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> vet[i];
	}
	cout << "A soma do vetor é " << somaVetor(vet, 5) << endl;
	return 0;
}

int somaVetor(int vet[], int tam)
{
	int soma = 0;
	for (int i = 0; i < tam; i++)
	{
		soma += vet[i];
	}
	return soma;
}
