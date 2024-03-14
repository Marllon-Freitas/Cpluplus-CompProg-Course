/*
Defina o registro balao como mostrado abaixo. Construa um programa para
alocar dinamicamente uma variável do tipo balao. Peça ao usuário para entrar
com valores para cada um dos membros e em seguida exiba o conteúdo do
registro.

struct balao
{
 float diametro; // diâmetro em metros
 char marca[20]; // nome da marca
 int modelo; // número do modelo
};

*/

#include <iostream>
using namespace std;

struct balao
{
	float diametro;
	char marca[20];
	int modelo;
};

int main()
{
	balao* ptbal = new balao;
	cout << "Digite o diâmetro do balão: ";
	cin >> ptbal->diametro;
	cout << "Digite a marca do balão: ";
	cin >> ptbal->marca;
	cout << "Digite o modelo do balão: ";
	cin >> ptbal->modelo;
	cout << "Diâmetro: " << ptbal->diametro << endl;
	cout << "Marca: " << ptbal->marca << endl;
	cout << "Modelo: " << ptbal->modelo << endl;

	delete ptbal;

	return 0;
}
