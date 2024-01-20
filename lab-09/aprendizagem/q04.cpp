/*
Escreva um programa que peça ao usuário para digitar o número de metros
percorridos na sua última viagem. Mostre a distância equivalente em quilômetros
e metros. Use uma constante para representar o número de metros em um
quilômetro. A saída deve ser no modelo a seguir:

Entre com a distância em metros: 22800
22800 metros equivalem a 22 quilômetros e 800 metros.

*/

#include <iostream>
using namespace std;

int main()
{
	const int METROS_EM_UM_KM = 1000;
	int metros, km, valor;

	cout << "Entre com a distância em metros: ";
	cin >> valor;

	metros = valor;
	km = valor / METROS_EM_UM_KM;
	valor = valor % METROS_EM_UM_KM;

	cout << metros << " metros equivalem a " << km << " quilômetros e " << valor << " metros." << endl;
	return 0;
}
