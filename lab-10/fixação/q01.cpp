/*
Escreva um programa que crie dois vetores de três elementos cada. O primeiro
vetor deve armazenar os preços dos produtos: Alface R$1.50/Kg, Beterraba
R$2.00/Kg, Cenoura R$1.00/Kg. O segundo vetor deve armazenar a quantidade
desejada de cada produto. Essa quantidade será informada pelo usuário. Calcule o
total a pagar por produto e o total final da compra.

Prezado Cliente,
Digite a quantidade de quilos desejados:
Alface: 2
Beterraba: 3
Cenoura: 1.5
Resumo da Compra
----------------------
Alface = R$3.00
Beterraba = R$6.00
Cenoura = R$1.50
----------------------
Total = R$10.50

*/

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	float precos[3] = { 1.5f, 2.0f, 1.0f };
	float quantidades[3];
	float total = 0;

	cout << "Prezado Cliente," << endl;
	cout << "Digite a quantidade de quilos desejados:" << endl;
	cout << "Alface: ";
	cin >> quantidades[0];
	cout << "Beterraba: ";
	cin >> quantidades[1];
	cout << "Cenoura: ";
	cin >> quantidades[2];

	cout << "Resumo da Compra" << endl;
	cout << "----------------------" << endl;
	cout.precision(2);
	cout << "Alface         = R$" << fixed << precos[0] * quantidades[0] << endl;
	cout << "Beterraba      = R$" << fixed << precos[1] * quantidades[1] << endl;
	cout << "Cenoura        = R$" << fixed << precos[2] * quantidades[2] << endl;
	cout << "----------------------" << endl;
	cout << "Total          = R$" << fixed << (precos[0] * quantidades[0]) + (precos[1] * quantidades[1]) + (precos[2] * quantidades[2]) << endl;

	return 0;
}
