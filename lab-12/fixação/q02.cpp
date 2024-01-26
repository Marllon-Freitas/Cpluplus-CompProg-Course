/*
O registro chocolate contém três membros, como descrito na questão anterior.
Escreva um programa para criar um vetor capaz de armazenar três chocolates.
Inicialize-os para valores de sua escolha, e então mostre o conteúdo de cada
registro.

*/

#include <iostream>
using namespace std;

struct chocolate
{
	char marca[20];
	float peso;
	int calorias;
};

int main()
{
	chocolate caixaDeChocolate[3] = { {"Charge", 2.30, 350},
									 {"Laka", 1.50, 250},
									 {"Snickers", 2.00, 300} };

	for (int i = 0; i < 3; i++)
	{
		cout << "Marca: " << caixaDeChocolate[i].marca << endl;
		cout << "Peso: " << caixaDeChocolate[i].peso << endl;
		cout << "Calorias: " << caixaDeChocolate[i].calorias << endl;
		cout << endl;
	}

	return 0;
}
