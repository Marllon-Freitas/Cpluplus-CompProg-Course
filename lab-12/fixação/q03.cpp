/*
Crie um registro para descrever uma data. O registro deve ser capaz de armazenar
o dia, o mês (em formato numérico) e o ano (no formato numérico AAAA). Em
seguida faça um programa que receba a data de nascimento de uma pessoa e a
data atual. Calcule e mostre quantos dias de vida ela tem.
Use o novo tipo criado para armazenar as datas e uma função para calcular o
número de dias de vida. A função deve receber dois registros do tipo data e
retornar um número inteiro referente ao número de dias.
• Considere que todos os meses têm 31 dias
• Desconsidere os anos bissextos
• Não utilize instruções de decisão (if)

Data de nascimento: 01/01/1990
Data de hoje: 26/10/2010
Você tem 7604 dias de vida.

*/

#include <iostream>
using namespace std;

struct dataBase
{
	int dia;
	int mes;
	int ano;
};

int diasDeVida(dataBase, dataBase);

int main()
{
	dataBase nascimento, hoje;
	char barra;

	cout << "Data de nascimento: ";
	cin >> nascimento.dia >> barra >> nascimento.mes >> barra >> nascimento.ano;

	cout << "Data de hoje: ";
	cin >> hoje.dia >> barra >> hoje.mes >> barra >> hoje.ano;

	cout << "Você tem " << diasDeVida(nascimento, hoje) << " dias de vida." << endl;

	return 0;
}

int diasDeVida(dataBase nascimento, dataBase hoje)
{
	int diasDeVida = 0;

	diasDeVida += (hoje.ano - nascimento.ano) * 365;
	diasDeVida += (hoje.mes - nascimento.mes) * 31;
	diasDeVida += (hoje.dia - nascimento.dia);

	return diasDeVida;
}
