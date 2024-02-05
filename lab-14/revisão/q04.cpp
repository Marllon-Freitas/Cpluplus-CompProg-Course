/*
Construa uma função que receba um peixe e exiba o seu conteúdo.
  a. Faça uma versão utilizando um parâmetro tipo peixe
  b. Faça uma versão utilizando um parâmetro tipo ponteiro para peixe

Sem ponteiro: Piaba com 6.2g e 5cm
Com ponteiro: Piaba com 6.2g e 5cm

*/

#include <iostream>
using namespace std;

struct Peixe
{
	string tipo;
	float peso;
	int comprimento;
};

void exibirPeixe(Peixe);

void exibirPeixe(Peixe*);

int main()
{
	Peixe peixe1 = { "Piaba", 6.2, 5 };
	Peixe* p = &peixe1;

	exibirPeixe(peixe1);
	exibirPeixe(p);

	return 0;
}

void exibirPeixe(Peixe p)
{
	cout << p.tipo << " com " << p.peso << "g e " << p.comprimento << "cm" << endl;
}

void exibirPeixe(Peixe* p)
{
	cout << p->tipo << " com " << p->peso << "g e " << p->comprimento << "cm" << endl;
}
