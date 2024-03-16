/*
Faça um programa que receba 10 valores inteiros do teclado, crie um vetor para
armazenar os cinco primeiros e outro para armazenar os cinco últimos. Crie e
exiba um terceiro vetor do mesmo tamanho cujos elementos sejam a soma dos
respectivos elementos dos dois primeiros vetores.

Digite 10 valores: 4 8 2 3 9 1 2 0 4 6
Vetor A: 4 8 2 3 9
Vetor B: 1 2 0 4 6
Vetor S: 5 10 2 7 15

*/

#include <iostream>
using namespace std;
const int TAM_VETOR = 10;

int main()
{
	int valores[TAM_VETOR], vetorA[TAM_VETOR / 2], vetorB[TAM_VETOR / 2],
		vetorS[TAM_VETOR / 2];
	cout << "Digite 10 valores: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> valores[i];
	}
	for (int i = 0; i < 5; i++)
	{
		vetorA[i] = valores[i];
		vetorB[i] = valores[i + TAM_VETOR / 2];
		vetorS[i] = vetorA[i] + vetorB[i];
	}
	cout << "Vetor A: ";
	for (int i = 0; i < TAM_VETOR / 2; i++)
	{
		cout << vetorA[i] << " ";
	}
	cout << endl;
	cout << "Vetor B: ";
	for (int i = 0; i < TAM_VETOR / 2; i++)
	{
		cout << vetorB[i] << " ";
	}
	cout << endl;
	cout << "Vetor S: ";
	for (int i = 0; i < TAM_VETOR / 2; i++)
	{
		cout << vetorS[i] << " ";
	}
	cout << endl;
}