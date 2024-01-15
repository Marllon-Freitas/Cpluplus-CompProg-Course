/*
O ponto flutuante possui uma representação binária que se divide em mantissa,
sinal da mantissa e expoente. Os bits podem ser transformados em um valor
através da fórmula v = s * 2(e-127) * (1 + m). Descubra o valor ponto flutuante
correspondente a seguinte codificação binária de 32 bits:

1 1 0 0 1 0 0 0 0 0 1 1 0 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// aceitando acentos no console
	system("chcp 1252 > nul");

	int binario[32] = { 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	int sinal = binario[0];
	int expoente = 0;
	double mantissa = 0.0;

	for (int i = 1; i <= 32; i++)
	{
		if (i <= 8)
		{
			expoente += binario[i] * pow(2, 8 - i);
		}
		else if (i == 9)
		{
			sinal = binario[i];
		}
		else
		{
			mantissa += binario[i] * pow(2, 8 - (i - 9));
		}
	}

	double valor = pow(-1, sinal) * (1 + mantissa) * pow(2, expoente - 127);

	cout << "O valor do ponto flutuante é: " << valor << endl;

	return 0;
}
