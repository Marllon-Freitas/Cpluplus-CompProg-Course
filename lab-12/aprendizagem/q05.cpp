/*
Crie um registro para definir uma data (com dia, mês e ano) e outro para definir
um horário (hora, minutos e segundos). Em seguida crie um registro para definir
um evento, composto por uma data, um horário e um local. Peça ao usuário que
entre com os dados de um evento e armazene-os em uma variável do tipo evento

*/

#include <iostream>
using namespace std;

struct dataMarcada
{
	int dia;
	int mes;
	int ano;
};

struct horario
{
	int hora;
	int minuto;
	int segundo;
};

struct evento
{
	dataMarcada data;
	horario horario;
	char local[50];
};

int main()
{
	evento eventoMarcado;
	char barra, doisPontos;
	cout << "Digite os dados do evento:" << endl;
	cout << "Data: ";
	cin >> eventoMarcado.data.dia >> barra >> eventoMarcado.data.mes >> barra >> eventoMarcado.data.ano;

	cout << "Horario: ";
	cin >> eventoMarcado.horario.hora >> doisPontos >> eventoMarcado.horario.minuto >> doisPontos >> eventoMarcado.horario.segundo;

	cout << "Local: ";
	cin >> eventoMarcado.local;

	cout << endl << "Evento:" << endl;
	cout << "Data: " << (eventoMarcado.data.dia < 10 ? "0" : "") << eventoMarcado.data.dia << "/" << (eventoMarcado.data.mes < 10 ? "0" : "") << eventoMarcado.data.mes << "/" << eventoMarcado.data.ano << endl;
	cout << "Horario: " << eventoMarcado.horario.hora << ":" << eventoMarcado.horario.minuto << ":" << eventoMarcado.horario.segundo << endl;
	cout << "Local: " << eventoMarcado.local << endl;

	return 0;
}
