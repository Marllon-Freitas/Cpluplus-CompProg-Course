/*
Defina um registro Conta Bancária, com os campos identificador, nome do cliente e
saldo. Na função principal, use o novo tipo Conta Bancária para criar uma variável
e peça ao usuário para entrar com os dados da conta. O saldo inicial deve ser zero.
Mostre a conta depois de criada e pergunte quanto o usuário deseja depositar na
conta, modificando o seu saldo.

*/

#include <iostream>
using namespace std;

struct contaBancaria
{
	int identificador;
	char nome[50];
	float saldo;
};

int main()
{
	contaBancaria conta = { 0, "", 0 };

	cout << "Digite os dados da conta bancaria:" << endl;
	cout << "Identificador: ";
	cin >> conta.identificador;

	cout << "Nome: ";
	cin >> conta.nome;

	cout << "Saldo: ";
	cin >> conta.saldo;
	cout << endl;

	cout << "Conta: " << conta.identificador << endl;
	cout << "Nome: " << conta.nome << endl;
	cout << "Saldo: R$" << conta.saldo << endl;

	return 0;
}
