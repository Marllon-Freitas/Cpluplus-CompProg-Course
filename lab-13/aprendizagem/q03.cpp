/*
A prefeitura de Mossoró elabora mensalmente um caderno com a programação
cultural da cidade. Ela deseja ter um programa que permita construir uma lista de
eventos.

O programa deve cadastrar as seguintes informações de um evento:
a. Data (um registro que possui três valores inteiros – dia, mês e ano)
b. Horário (um registro que possui dois valores inteiros – hora e minuto)
c. Descrição (com no máximo 18 caracteres)
Os eventos devem ser registros inseridos em um vetor com no máximo 10
elementos. Peça ao usuário para entrar com as informações de 2 eventos. Em
seguida exiba um resumo mostrando todos os eventos cadastrados.

Entre com 2 eventos:
#1
Data: 26 10 2010
Hora: 16 00
Desc: Musica ao Vivo
#2
Data: 26 10 2010
Hora: 18 00
Desc: Show de Dança
--------------------
Eventos Cadastrados
26/10/2010 16:00 Musica ao Vivo
26/10/2010 18:00 Show de Dança

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct datas
{
	int dia, mes, ano;
};

struct horario
{
	int hora, minuto;
};

struct evento
{
	datas data;
	horario hora;
	char descricao[19];
};

int main()
{
	evento eventos[10];
	for (int i = 0; i < 2; i++)
	{
		cout << "#" << i + 1 << "\n";
		cout << "Data: ";
		cin >> eventos[i].data.dia >> eventos[i].data.mes >> eventos[i].data.ano;
		cout << "Hora: ";
		cin >> eventos[i].hora.hora >> eventos[i].hora.minuto;
		cout << "Desc: ";
		cin.ignore();
		cin.getline(eventos[i].descricao, 19);
	}
	cout << "-------------------\n";
	cout << "Eventos Cadastrados\n";
	for (int i = 0; i < 2; i++)
	{
		cout << eventos[i].data.dia << "/" << eventos[i].data.mes << "/" << eventos[i].data.ano << " ";
		cout << (eventos[i].hora.hora > 9 ? "" : "0") << eventos[i].hora.hora << ":" << (eventos[i].hora.minuto > 9 ? "" : "0") << eventos[i].hora.minuto << " ";
		cout << eventos[i].descricao << "\n";
	}
	return 0;
}
