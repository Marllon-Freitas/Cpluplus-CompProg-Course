/*
Crie uma variável do tipo double com o valor 245.795. Crie outra variável que
receberá somente o valor inteiro dessa primeira variável (utilize type cast). Após
isso, multiplique as duas variáveis por 100 e mostre o resultado. Que lições podem
ser tiradas desse programa?

*/

#include <iostream>
using namespace std;

int main()
{
	double a = 245.795;
	int b = int(a);
	cout << a * 100 << endl;
	cout << b * 100 << endl;
	return 0;
}

/*
Que quando um valor double é convertido para int, ele perde a parte decimal.
*/
