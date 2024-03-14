/*
Crie um registro "Local" com os campos nome, país e continente. Pergunte ao
usuário quantos locais ele quer visitar nas próximas férias e crie um vetor de locais
alocando dinamicamente o espaço de acordo com quantos locais ele quer visitar.
Use um laço for para armazenar as informações dos locais que o usuário deseja
visitar, e depois do armazenamento mostre os locais que ele escolheu. Libere o
espaço alocado dinamicamente ao final do programa.

*/

#include <iostream>
using namespace std;

struct Local
{
	char nome[20];
	char pais[20];
	char continente[20];
};

int main()
{
	int n;
	cout << "Quantos locais deseja visitar? ";
	cin >> n;

	Local* locais = new Local[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Local #" << i + 1 << endl;
		cout << "Digite o nome do local: ";
		cin >> locais[i].nome;
		cout << "Digite o país do local: ";
		cin >> locais[i].pais;
		cout << "Digite o continente do local: ";
		cin >> locais[i].continente;
	}

	cout << "Os locais que você deseja visitar são: ";

	for (int i = 0; i < n; i++)
	{
		cout << locais[i].nome << " (" << locais[i].pais << ", " << locais[i].continente << ")";
		if (i < n - 1)
		{
			cout << ", ";
		}
	}
	cout << endl;
	delete[] locais;
	return 0;
}
