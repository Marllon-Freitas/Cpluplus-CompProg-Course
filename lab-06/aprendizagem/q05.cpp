/*
Construa uma função isShort() para verificar se um número cabe em 16 bits e
uma função isInt() para verificar se um número cabe em 32 bits. Para alcançar
esse objetivo, as funções devem receber o valor sempre em uma quantidade de bits
maior e usar as constantes definidas no arquivo de cabeçalho <climits> para
verificar se os números estão dentro das faixas MIN e MAX dos respectivos tipos.
As funções devem retornar um valor booleano true ou false. Construa um
programa para testar as funções, como nos exemplos de execução abaixo.

Exemplo de execução 1:
Digite um valor inteiro: 300
300 cabe em 16 bits
300 cabe em 32 bits

Exemplo de execução 2:
Digite um valor inteiro: 70000
70000 não cabe em 16 bits
70000 cabe em 32 bits

Exemplo de execução 3:
Digite um valor inteiro: 5000000000
5000000000 não cabe em 16 bits
5000000000 não cabe em 32 bits

*/

/*
Construa uma função isShort() para verificar se um número cabe em 16 bits e
uma função isInt() para verificar se um número cabe em 32 bits. Para alcançar
esse objetivo, as funções devem receber o valor sempre em uma quantidade de bits
maior e usar as constantes definidas no arquivo de cabeçalho <climits> para
verificar se os números estão dentro das faixas MIN e MAX dos respectivos tipos.
As funções devem retornar um valor booleano true ou false. Construa um
programa para testar as funções, como nos exemplos de execução abaixo.

Exemplo de execução 1:
Digite um valor inteiro: 300
300 cabe em 16 bits
300 cabe em 32 bits

Exemplo de execução 2:
Digite um valor inteiro: 70000
70000 não cabe em 16 bits
70000 cabe em 32 bits

Exemplo de execução 3:
Digite um valor inteiro: 5000000000
5000000000 não cabe em 16 bits
5000000000 não cabe em 32 bits

*/

#include <iostream>
#include <climits>
using namespace std;

bool isShort(long long);
bool isInt(long long);

int main()
{
	long long valor;
	cout << "Digite um valor inteiro: ";
	cin >> valor;
	if (isShort(valor))
		cout << valor << " cabe em 16 bits" << endl;
	else
		cout << valor << " não cabe em 16 bits" << endl;
	if (isInt(valor))
		cout << valor << " cabe em 32 bits" << endl;
	else
		cout << valor << " não cabe em 32 bits" << endl;
	return 0;
}

bool isShort(long long valor)
{
	return valor >= SHRT_MIN && valor <= SHRT_MAX;
}

bool isInt(long long valor)
{
	return valor >= INT_MIN && valor <= INT_MAX;
}
