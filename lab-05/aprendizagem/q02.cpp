/*
Construa uma função que calcule o índice de massa corporal (IMC) de um
indivíduo. A função receberá a altura (m) e a massa (kg) do indivíduo e retornará o
seu IMC para a função principal. A função principal deve mostrar o resultado.
Use a fórmula: IMC = massa / (altura) ²

Índice de Massa Corporal (IMC)
------------------------
Altura: 1.78
Massa: 75
IMC: 23.6713

*/

#include <iostream>
#include <cmath>
using namespace std;

float imc(float altura, float massa);

int main()
{
	float altura, massa;
	cout << "Altura: ";
	cin >> altura;
	cout << "Massa: ";
	cin >> massa;
	cout << "IMC: " << imc(altura, massa) << endl;
}

float imc(float altura, float massa)
{
	return massa / pow(altura, 2);
}
