/*
Defina um registro que descreva um peixe. O registro deve incluir o tipo (string),
o peso (ponto-flutuante) e o comprimento (inteiro) do peixe. Em seguida mostre:

a. Como criar uma variável de tipo peixe
b. Como criar um ponteiro para uma variável de tipo peixe.

*/

#include <iostream>
using namespace std;

struct Peixe
{
	string tipo;
	float peso;
	int comprimento;
};

int main()
{
	Peixe peixe1 = { "Tilápia", 0.5, 20 };
	Peixe* p = &peixe1;

	cout << "Tipo: " << p->tipo << endl;
	cout << "Peso: " << p->peso << endl;
	cout << "Comprimento: " << p->comprimento << "cm" << endl;

	return 0;
}
