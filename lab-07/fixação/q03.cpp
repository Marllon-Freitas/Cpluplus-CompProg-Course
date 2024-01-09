/*
Escreva uma função chamada charada() que receba um caractere ch e um
número x. A função deve retornar o caractere que está x posições à frente de ch na
tabela ASCII. A função principal deve usar charada() várias vezes para exibir a
palavra “Papel”. Isso deve ser feito com cinco chamadas à função, com cada uma
das chamadas usando os respectivos valores para x: 20, 90, 72, 48, 107.

Dica: procure na tabela ASCII os caracteres apropriados para passar como
argumento de forma a obter a palavra “Papel” como resultado.

*/

#include <iostream>
using namespace std;

char charada(char, int);

int main() {
	cout << charada('<', 20);
	cout << charada('\a', 90);
	cout << charada('(', 72);
	cout << charada('5', 48);
	cout << charada('\x01', 107);
	return 0;
}

char charada(char ch, int x) {
	return ch + x;
}
