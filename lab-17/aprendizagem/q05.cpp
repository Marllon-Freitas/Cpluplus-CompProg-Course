/*
A soma dos quadrados dos 10 primeiros números naturais é:
1^2 + 2^2 + … + 10^2 = 385
O quadrado da soma dos 10 primeiros números naturais é:
(1 + 2 + … + 10)^2 = 3025
Assim, a diferença entre a soma dos quadrados dos 10 primeiros números naturais
e o quadrado da soma é 3025 - 385 = 2640. Encontre a diferença entre a soma dos
quadrados dos 100 primeiros números naturais e o quadrado da soma dos 100
primeiros números naturais. Utilize o laço for na solução do problema.

*/

#include <iostream>
using namespace std;

int main()
{
	int somaQuadrados = 0, quadradoSoma = 0;
	for (int i = 1; i <= 100; i++)
	{
		somaQuadrados += i * i;
		quadradoSoma += i;
	}
	quadradoSoma *= quadradoSoma;
	cout << "A diferença entre a soma dos quadrados dos 100 primeiros números naturais e o quadrado da soma é: " << quadradoSoma - somaQuadrados << endl;
	return 0;
}