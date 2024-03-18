/*
Reescreva o programa abaixo usando os laços for e while.

int n;
cout << "Digite um número entre 0-10\n";
do
{
 cin >> n;
}
while (n != 7);

cout << "Sim, 7 é meu número favorito.\n";

*/
#include <iostream>
using namespace std;

void forLoop();

void whileLoop();

int main()
{
	// usando for
	forLoop();
	// usando while
	whileLoop();
	return 0;
}

void forLoop()
{
	cout << "Usando for\n";
	int n;
	cout << "Digite um número entre 0-10\n";
	for (cin >> n; n != 7; cin >> n)
		;
	cout << "Sim, 7 é meu número favorito.\n";
}

void whileLoop()
{
	cout << "Usando while\n";
	int n;
	cout << "Digite um número entre 0-10\n";
	cin >> n;
	while (n != 7)
	{
		cin >> n;
	}
	cout << "Sim, 7 é meu número favorito.\n";
}
