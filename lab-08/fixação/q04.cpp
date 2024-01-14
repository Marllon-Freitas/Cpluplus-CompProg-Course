/*
A massa de uma molécula de água é aproximadamente 3.0x10-23 gramas. Um
quarto de galão de água é aproximadamente 950 gramas. Escreva um programa
que pergunte a quantidade de água em galões e mostre a quantidade de moléculas
de água contidas nesse volume.

Digite a quantidade de galões de água: 2.5
Em 2.5 galões existem 3.16667e+026 moléculas de água.

*/

#include <iostream>

using namespace std;

#define MASSA_MOLECULA_AGUA 3e-23
#define MASSA_QUARTO_GALAO_AGUA 3800

float mol_agua(float);

int main()
{
	system("chcp 1252 > nul");

	float galoes;

	cout << "Digite a quantidade de galões de água: ";
	cin >> galoes;

	cout << "Em " << galoes << " galões existem " << mol_agua(galoes) << " moléculas de água." << endl;

	return 0;
}

float mol_agua(float galoes)
{
	return galoes * MASSA_QUARTO_GALAO_AGUA / MASSA_MOLECULA_AGUA;
}
