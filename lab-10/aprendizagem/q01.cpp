/*
Inicialize um vetor de 5 inteiros com números quaisquer. Mostre o seu vetor na
tela e peça ao usuário que escolha uma posição do vetor que ele deseja modificar e
o número que ele deseja colocar nessa posição. Modifique o vetor de acordo com o
que o usuário escolheu e mostre-o na tela.

Vetor: 10 80 30 45 15
---------------------
Alterar posição: 2
Novo valor: 90
---------------------
Vetor: 10 80 90 45 15

*/

#include <iostream>
using namespace std;

int main()
{
	int vet[5] = { 10, 80, 30, 45, 15 }, posicao, valor;

	cout << "Vetor: ";
	for (int i = 0; i < 5; i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;

	cout << "---------------------" << endl;
	cout << "Alterar posição: ";
	cin >> posicao;

	if (posicao < 0 || posicao > 4)
	{
		cout << "Posição inválida!" << endl;
		return 0;
	}

	cout << "Novo valor: ";
	cin >> valor;
	cout << "---------------------" << endl;

	vet[posicao] = valor;

	cout << "Vetor: ";
	for (int i = 0; i < 5; i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;

	return 0;
}
