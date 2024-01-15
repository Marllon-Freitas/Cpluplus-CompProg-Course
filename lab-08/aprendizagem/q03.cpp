/*
O ponto flutuante, por usar uma quantidade limitada de bits, não é capaz de
representar todos os números reais possíveis. Alguns números não possuem uma
representação exata e a única forma de trabalhar com eles é através de
arredondamento.
Utilize “cout << fixed;” e “cout.precision(8);” para encontrar 5 números
ponto flutuantes cuja representação não seja exata com 8 casas decimais após a
vírgula.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// aceitando acentos no console
	system("chcp 1252 > nul");

	cout << fixed;
	cout.precision(8);

	cout << "1/3 = " << 1.0 / 3.0 << endl;
	cout << "1/7 = " << 1.0 / 7.0 << endl;
	cout << "1/11 = " << 1.0 / 11.0 << endl;
	cout << "1/13 = " << 1.0 / 13.0 << endl;
	cout << "1/17 = " << 1.0 / 17.0 << endl;

	return 0;
}
