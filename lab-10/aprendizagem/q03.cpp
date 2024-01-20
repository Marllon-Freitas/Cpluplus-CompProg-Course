/*
Declare um vetor de três double’s e peça ao usuário para entrar com os valores do
vetor. Crie uma função que recebe o vetor de três posições e retorna o resultado da
multiplicação do primeiro elemento pelo último subtraído pelo termo do meio.
Chame a função e mostre o retorno dela na função principal.

*/

#include <iostream>
using namespace std;

double calculaVetor(double vet[3]);

int main()
{
	double vet[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> vet[i];
	}

	cout << "Resultado: " << calculaVetor(vet) << endl;

	return 0;
}

double calculaVetor(double vet[3])
{
	return (vet[0] * vet[2]) - vet[1];
}
