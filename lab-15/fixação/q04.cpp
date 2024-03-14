/*
Repita o exercício anterior criando um vetor dinâmico de carros. Ao invés de
inicializar o vetor com valores predefinidos, peça ao usuário para digitar os dados
de dois carros. Use uma função para receber o vetor de carros e exibir o valor total
dos carros.

Entre com os dados de 2 carros:
Agile 2013 27500
Fusion 2017 112300
O valor total é R$139.800

*/

#include <iostream>
using namespace std;

struct Carro
{
	char modelo[20];
	char anoDeFabricacao[5];
	float preco;
};

void exibirValorTotal(Carro* vetor, int n);

int main()
{
	int n = 2;
	Carro* vetorDinamicoDeCarros = new Carro[10];
	cout << "Entre com os dados de " << n << " carros:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Carro #" << i + 1 << endl;
		cout << "Modelo: ";
		cin >> vetorDinamicoDeCarros[i].modelo;
		cout << "Ano de fabricação: ";
		cin >> vetorDinamicoDeCarros[i].anoDeFabricacao;
		cout << "Preço: ";
		cin >> vetorDinamicoDeCarros[i].preco;
	}

	exibirValorTotal(vetorDinamicoDeCarros, n);

	delete[] vetorDinamicoDeCarros;
	return 0;
}

void exibirValorTotal(Carro* vetor, int n)
{
	float total = 0;
	for (int i = 0; i < n; i++)
	{
		total += vetor[i].preco;
	}
	cout << "O valor total é R$" << total << endl;
}