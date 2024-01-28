/*
Uma fábrica de automóveis define a cor de um carro por um número, um código de
letras ou pelo nome da cor, nunca os três simultaneamente. A correspondência das
principais cores é dada na tabela abaixo. Construa um registro para guardar
informações sobre um carro. Um carro deve ter nome do modelo, ano de
fabricação, cor (número, código ou nome) e preço.

Nome Número Código
Preto 13302 A33B
Azul 00828 C44E
Amarelo 11029 JB81

Em seguida construa um vetor de 10 carros inicializando os dois primeiros carros
com as informações: "Vectra", 2009, "Azul", R$58.000,00 e "Polo", 2008, "Preto",
R$45.000,00, respectivamente. Em seguida peça ao usuário para entrar com os
dados de um terceiro carro e armazene-o no vetor. Finalmente o programa deve
mostrar na tela os dados para os três carros.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

union cor
{
	int numero;
	char codigo[5];
	char nome[30];
};

struct carro
{
	char modelo[30];
	int ano;
	cor cor;
	float preco;
};

void mostrarCarros(carro[], int, int);

int main()
{
	carro carros[10] = {};
	int opcao;
	strcpy(carros[0].modelo, "Vectra");
	carros[0].ano = 2009;
	strcpy(carros[0].cor.nome, "Azul");
	carros[0].preco = 58000;

	strcpy(carros[1].modelo, "Polo");
	carros[1].ano = 2008;
	strcpy(carros[1].cor.nome, "Preto");
	carros[1].preco = 45000;

	cout << "Digite o modelo do carro: ";
	cin >> carros[2].modelo;
	cout << "Digite o ano do carro: ";
	cin >> carros[2].ano;
	cout << "Como deseja informar a cor do veiculo? " << endl;
	cout << "1 - Número" << endl;
	cout << "2 - Código" << endl;
	cout << "3 - Nome" << endl;
	cout << "Digite a opção desejada: ";
	cin >> opcao;
	switch (opcao)
	{
	case 1:
		cout << "Digite o número da cor: ";
		cin >> carros[2].cor.numero;
		break;
	case 2:
		cout << "Digite o código da cor: ";
		cin >> carros[2].cor.codigo;
		break;
	case 3:
		cout << "Digite o nome da cor: ";
		cin >> carros[2].cor.nome;
		break;
	default:
		cout << "Opção inválida!" << endl;
		break;
	}
	cout << "Digite o preço do carro: ";
	cin >> carros[2].preco;
	mostrarCarros(carros, 3, opcao);

	return 0;
}

void mostrarCarros(carro carros[], int tamanho, int opcao)
{
	for (int i = 0; i < tamanho; i++)
	{
		cout << "Carro " << i + 1 << ":" << endl;
		cout << "Modelo: " << carros[i].modelo << endl;
		cout << "Ano: " << carros[i].ano << endl;
		switch (opcao)
		{
		case 1:
			cout << "Cor: " << carros[i].cor.numero << endl;
			break;
		case 2:
			cout << "Cor: " << carros[i].cor.codigo << endl;
			break;
		case 3:
			cout << "Cor: " << carros[i].cor.nome << endl;
			break;
		default:
			cout << "Opção inválida!" << endl;
			break;
		}
		cout << "Preço: R$" << carros[i].preco << endl;
		cout << endl;
	}
}
