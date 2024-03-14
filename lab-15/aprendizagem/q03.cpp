/*
Inicie o programa perguntando ao usuário quantos inteiros ele deseja armazenar
em um vetor. Use a informação digitada para criar um vetor dinâmico com o
espaço necessário para armazenar a quantidade de inteiros desejada. Depois disso,
deixe que o próprio usuário preencha o vetor, utilizando o tamanho do vetor como
condição de parada de um laço for. Mostre o vetor que foi preenchido através de
outro laço e libere o espaço alocado dinamicamente ao final do programa.

Quantos valores deseja guardar? 5
Quais os valores? 34 25 18 60 41
Os valores 34, 25, 18, 60 e 41 foram armazenados.

*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Quantos valores deseja guardar? ";
	cin >> n;

	int* valores = new int[n];
	cout << "Quais os valores? ";
	for (int i = 0; i < n; i++)
	{
		cin >> valores[i];
	}
	cout << "Os valores ";
	for (int i = 0; i < n; i++)
	{
		cout << valores[i];
		if (i < n - 1)
		{
			cout << ", ";
		}
	}
	cout << " foram armazenados." << endl;
	delete[] valores;
	return 0;
}