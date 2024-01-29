/*
Analise o uso de enumeração no código abaixo:
#include <iostream>
using namespace std;
enum mes {JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
int main()
{
 char meses[12][10] =
 {
"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
"Julho", "Agosto", "Setembro", "Outubro", "Novembro",
"Dezembro"
 };
 for (mes ind = JAN; ind <= DEZ; ind = mes(ind + 1))
cout << meses[ind] << endl;
 return 0;
}
Refaça o programa de forma que ele exiba os dias da semana.
*/

#include <iostream>
using namespace std;

enum dia { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main()
{
	char dias[7][15] =
	{
		"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira",
		"Quinta-feira", "Sexta-feira", "Sábado"
	};

	for (dia ind = DOM; ind <= SAB; ind = dia(ind + 1))
	{
		cout << dias[ind] << endl;
	}

	return 0;
}
