/*
Dois amigos jogam juntos na loteria toda semana. Escreva um programa que
solicite a quantia com que cada um participou na aposta e o valor total do prêmio.
O programa deve mostrar quanto cada um deve receber considerando que a
partilha do prêmio é proporcional à quantia apostada.

Aposta dos Amigos
-----------------
Digite a quantia apostada pelo jogador 1: 2.50
Digite a quantia apostada pelo jogador 2: 1.00
Entre com o valor do prêmio: 12600000
O jogador 1 tem direito a R$9000000
O jogador 2 tem direito a R$3600000

*/

#include <iostream>
using namespace std;

int main()
{
	float aposta1, aposta2, premio, total;
	cout << "Aposta dos Amigos" << endl;
	cout << "-----------------" << endl;
	cout << "Digite a quantia apostada pelo jogador 1: ";
	cin >> aposta1;
	cout << "Digite a quantia apostada pelo jogador 2: ";
	cin >> aposta2;
	cout << "Entre com o valor do prêmio: ";
	cin >> premio;
	total = aposta1 + aposta2;
	cout.precision(0);
	cout << "O jogador 1 tem direito a R$" << fixed << (aposta1 / total) * premio << endl;
	cout << "O jogador 2 tem direito a R$" << fixed << (aposta2 / total) * premio << endl;
	return 0;
}
