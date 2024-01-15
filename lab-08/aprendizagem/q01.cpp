/*
Escreva uma função que calcula as raízes de uma equação quadrática ax²+bx+c.
Receba como argumentos da função os termos a, b e c da equação quadrática e
mostre o resultado dentro da própria função.

Fórmula de Bhaskara: x = (-b ± √(b²-4ac)) / 2a

A quantidade de raízes reais de uma função quadrática depende do valor obtido
para o radicando ∆ = b²-4ac, chamado discriminante, a saber:

a) Quando ∆ é positivo, há duas raízes reais e distintas;
b) Quando ∆ é zero, há só uma raiz real (há duas raízes iguais);
c) Quando ∆ é negativo, não há raiz real.

*/

#include <iostream>
#include <cmath>

using namespace std;

void raizes(float, float, float);

int main()
{
	system("chcp 1252 > nul");

	float a, b, c;

	cout << "Digite os coeficientes a, b e c da equação ax²+bx+c: ";
	cin >> a >> b >> c;

	raizes(a, b, c);

	return 0;
}

void raizes(float a, float b, float c)
{
	float delta = pow(b, 2) - 4 * a * c;

	if (delta > 0)
	{
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);

		cout << "As raízes da equação são " << x1 << " e " << x2 << endl;
	}
	else if (delta == 0)
	{
		float x = -b / (2 * a);

		cout << "A raiz da equação é " << x << endl;
	}
	else
	{
		cout << "Não há raízes reais para a equação." << endl;
	}
}
