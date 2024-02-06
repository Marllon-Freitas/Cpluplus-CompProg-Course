/*
Crie uma variável do tipo char inicializada para o caractere 'A' e um ponteiro que
aponte para esta variável. Modifique a variável criada usando o ponteiro, de forma
que seu conteúdo agora seja 'B'. Por fim, mostre o conteúdo da variável e o
conteúdo apontado pelo ponteiro.

*/

/*
Crie uma variável do tipo char inicializada para o caractere 'A' e um ponteiro que
aponte para esta variável. Modifique a variável criada usando o ponteiro, de forma
que seu conteúdo agora seja 'B'. Por fim, mostre o conteúdo da variável e o
conteúdo apontado pelo ponteiro.

*/

#include <iostream>
using namespace std;

int main()
{
	char c = 'A';
	char* p = &c;
	*p = 'B';
	cout << c << endl;
	cout << *p << endl;
}
