/*
Declare um ponteiro para inteiro, aloque memória dinamicamente para ele e
armazene o número 100 nessa memória. Mostre o conteúdo apontado. Peça que o
usuário digite um novo número inteiro e armazene-o na memória previamente
alocada. Libere o espaço alocado dinamicamente ao final do programa.

Conteúdo armazenado: 100
Digite novo valor para esse bloco de memória: 80

*/

#include <iostream>
using namespace std;

int main()
{
	int* pt = new int;
	*pt = 100;
	cout << "Conteúdo armazenado: " << *pt << endl;
	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *pt;
	cout << "Novo Conteúdo armazenado: " << *pt << endl;
	delete pt;
	return 0;
}