/*
Crie um registro "Nadador" com os campos nome, idade e categoria. Na função
principal, declare um nadador e peça ao usuário que digite o nome e a idade do
nadador. Porém, a categoria deve ser determinada pelo programa de acordo com a
tabela abaixo:

Categoria Idade
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 15 a 30
Sênior Acima de 30
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct nadador
{
	char nome[50];
	int idade;
	char categoria[50];
};

int main()
{
	nadador n;

	cout << "Digite o nome do nadador: ";
	cin.getline(n.nome, 50);
	cout << "Digite a idade do nadador: ";
	cin >> n.idade;

	if (n.idade >= 5 && n.idade <= 7)
		strcpy(n.categoria, "Infantil");
	else if (n.idade >= 8 && n.idade <= 10)
		strcpy(n.categoria, "Juvenil");
	else if (n.idade >= 11 && n.idade <= 15)
		strcpy(n.categoria, "Adolescente");
	else if (n.idade >= 15 && n.idade <= 30)
		strcpy(n.categoria, "Adulto");
	else if (n.idade > 30)
		strcpy(n.categoria, "Sênior");
	else
		strcpy(n.categoria, "Categoria não encontrada (idade invalida)");

	cout << "Nome: " << n.nome << endl;
	cout << "Idade: " << n.idade << endl;
	cout << "Categoria: " << n.categoria << endl;

	return 0;
}
