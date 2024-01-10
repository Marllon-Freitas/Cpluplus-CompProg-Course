/*
Escreva as funções ligarBit, deligarBit e testarBit. Elas devem receber um unsigned
char e a posição do bit. A função TestarBit deve retornar um booleano indicando o
estado do bit e as demais devem retornar o valor unsigned char modificado.
*/

#include <iostream>
using namespace std;

unsigned char ligarBit(unsigned char, int);
unsigned char deligarBit(unsigned char, int);
bool testarBit(unsigned char, int);

int main() 
{
	unsigned char c;
	int pos;
	cout << "Informe um caracter: ";
	cin >> c;
	cout << "Informe a posição do bit: ";
	cin >> pos;
	cout << "Ligando o bit " << pos << " de " << (int)c << " temos " << (int)ligarBit(c, pos) << endl;
	cout << "Desligando o bit " << pos << " de " << (int)c << " temos " << (int)deligarBit(c, pos) << endl;
	cout << "O bit " << pos << " de " << (int)c << " está " << (testarBit(c, pos) ? "ligado" : "desligado") << endl;
	return 0;
}

unsigned char ligarBit(unsigned char c, int pos) {
	return c | (1 << pos);
}

unsigned char deligarBit(unsigned char c, int pos) {
	return c & ~(1 << pos);
}

bool testarBit(unsigned char c, int pos) {
	return c & (1 << pos);
}
