/*
Projete um registro chamado carro que guarde as seguintes informações sobre um
automóvel: o fabricante (string) e o ano de construção (inteiro).
Escreva um programa que pergunte ao usuário quantos carros devem ser
catalogados. O programa deve então usar new para criar um vetor dinâmico dessa
quantidade de carros.
Em seguida, o programa deve usar um laço para que o usuário entre com as
informações de cada um dos carros. Por fim, o programa deve exibir o conteúdo de
cada registro, como mostrado abaixo.

Quantos carros para catalogar? 2
Carro #1
Marca: Chevrolet
Ano: 2005
Carro #2
Marca: Volkswagen
Ano: 2008
Aqui está sua coleção:
2005 Chevrolet
2008 Volkswagen

*/

#include <iostream>
using namespace std;

struct Carro
{
	char marca[20];
	int ano;
};

int main()
{
	int n;
	cout << "Quantos carros para catalogar? ";
	cin >> n;
	Carro* carros = new Carro[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Carro #" << i + 1 << endl;
		cout << "Marca: ";
		cin >> carros[i].marca;
		cout << "Ano: ";
		cin >> carros[i].ano;
	}
	cout << "Aqui está sua coleção:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << carros[i].ano << " " << carros[i].marca << endl;
	}
	delete[] carros;
	return 0;
}