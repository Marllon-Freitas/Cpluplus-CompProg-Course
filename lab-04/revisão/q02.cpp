/*
Uma forma de obter um número pseudoaleatório mais imprevisível é usar um
valor de semente que mude com o tempo. A biblioteca <ctime> possui uma função
time() que retorna uma quantidade de segundos transcorrida (geralmente desde
1 de janeiro de 1970) quando passamos NULL como argumento da função.

srand(time(NULL));

Teste o resultado dessa modificação criando um número pseudoaleatório com
rand() e rodando o programa várias vezes.

Por fim, exiba a mensagem GRANDE se o número obtido for maior que 16834 e
PEQUENO caso contrário.

Gerando número pseudoaleatório:
3198
PEQUENO
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	cout << "Gerando número pseudoaleatório:" << endl;
	int n = rand();
	cout << n << endl;
	if (n > 16834)
		cout << "GRANDE" << endl;
	else
		cout << "PEQUENO" << endl;
	return 0;
}