/*
Escreva um programa que crie quatro variáveis, uma para cada um dos tipos
inteiros mostrados abaixo. O programa deve mostrar quantos bytes cada tipo
ocupa e calcular a quantidade total de memória utilizada pelas variáveis criadas.
Use espaços nas cadeias de caracteres para produzir a saída no formato abaixo:

short: 2 bytes
int: 4 bytes
long: 4 bytes
long long: 8 bytes
Total: 18 bytes

*/

#include <iostream>
using namespace std;

int main()
{
	short a;
	int b;
	long c;
	long long d;
	cout << "short:      " << sizeof(a) << " bytes" << endl;
	cout << "int:        " << sizeof(b) << " bytes" << endl;
	cout << "long:       " << sizeof(c) << " bytes" << endl;
	cout << "long long:  " << sizeof(d) << " bytes" << endl;
	cout << "Total:      " << sizeof(a) + sizeof(b) + sizeof(c) + sizeof(d) << " bytes" << endl;
}
