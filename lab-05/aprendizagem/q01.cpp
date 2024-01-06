/*
Qual é a diferença entre as instruções de inicialização a seguir? Existe alguma
razão para preferir uma opção sobre a outra? O resultado delas depende de onde
elas estão dentro do código

Salário atual: R$10000
Salário ajustado para R$11500

*/

#include <iostream>
using namespace std;

void ajustaSalario(float salario, float percentual);

int main()
{
	float salario, percentual;
	cout << "Salário atual: R$ ";
	cin >> salario;
	cout << "Percentual de ajuste: ";
	cin >> percentual;
	ajustaSalario(salario, percentual);
}

void ajustaSalario(float salario, float percentual)
{
	salario = salario * (1 + percentual / 100);
	cout << "Salário ajustado para R$ " << salario << endl;
}
