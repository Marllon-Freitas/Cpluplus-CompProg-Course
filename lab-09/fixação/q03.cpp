/*
Escreva um programa que peça ao usuário para digitar certa quantidade de
segundos como um valor inteiro. O programa deve mostrar o equivalente em dias,
horas, minutos e segundos. Use constantes para representar o número de horas em
um dia, o número de minutos em uma hora e o número de segundos em um
minuto. A saída deve ficar no formato abaixo:

Entre com o número de segundos: 31600000
31600000 segundos = 365 dias, 17 horas, 46 minutos e 40 segundos

*/

#include <iostream>
using namespace std;

int main()
{
	const int SEGUNDOS_EM_UM_DIA = 86400;
	const int SEGUNDOS_EM_UMA_HORA = 3600;
	const int SEGUNDOS_EM_UM_MINUTO = 60;
	int segundos, dias, horas, minutos, valor;

	cout << "Entre com o número de segundos: ";
	cin >> valor;

	segundos = valor;
	dias = valor / SEGUNDOS_EM_UM_DIA;
	valor = valor % SEGUNDOS_EM_UM_DIA;

	horas = valor / SEGUNDOS_EM_UMA_HORA;
	valor = valor % SEGUNDOS_EM_UMA_HORA;

	minutos = valor / SEGUNDOS_EM_UM_MINUTO;
	valor = valor % SEGUNDOS_EM_UM_MINUTO;

	cout << segundos << " segundos = " << dias << " dias, " << horas << " horas, " << minutos << " minutos e " << valor << " segundos" << endl;
	return 0;
}
