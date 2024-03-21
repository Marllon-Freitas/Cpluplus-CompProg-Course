/*
Crie um programa que simule uma minicalculadora. Está minicalculadora deve
receber dois operandos e operá-los de acordo com o operador escolhido. Os
operadores disponíveis devem ser os de adição, subtração, multiplicação e divisão,
e a minicalculadora deve ser capaz de trabalhar tanto com inteiros como com
decimais. O usuário deve ser capaz de escolher qual operação realizar e depois
inserir os operandos. Ele também deve ser capaz de realizar quantas operações
quiser até que deseje parar.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char operacao;
	double operando1, operando2;
	cout << "Digite a operação desejada (+, -, *, /) ou (s) para sair: ";
	cin >> operacao;
	while (operacao != 's')
	{
		cout << "Digite o primeiro operando: ";
		cin >> operando1;
		cout << "Digite o segundo operando: ";
		cin >> operando2;
		switch (operacao)
		{
		case '+':
			cout << "Resultado: " << operando1 + operando2 << endl;
			break;
		case '-':
			cout << "Resultado: " << operando1 - operando2 << endl;
			break;
		case '*':
			cout << "Resultado: " << operando1 * operando2 << endl;
			break;
		case '/':
			cout << "Resultado: " << operando1 / operando2 << endl;
			break;
		default:
			cout << "Operação inválida\n";
		}
		cout << "Digite a operação desejada (+, -, *, /) ou (s) para sair: ";
		cin >> operacao;
	}
	return 0;
}