/*
Declare um registro Horário com os campos horas e minutos. Crie uma função
MostrarHorario que deve receber um ponteiro para um Horário e mostrá-lo no
formato HH:MM. Na função principal, declare uma variável do tipo Horário e um
ponteiro que aponta para ela. Peça que o usuário digite o horário atual e guarde-o
na variável. Usando o ponteiro, incremente o horário recebido em uma hora e em
seguida mostre o horário corrigido com MostrarHorario

Que horas são? 9:50
Seu relógio está atrasado, o horário correto é 10:50.

*/

#include <iostream>
using namespace std;

struct Horario
{
	int horas;
	int minutos;
};

void MostrarHorario(const Horario* h);

int main()
{
	Horario h;
	Horario* ptr = &h;

	cout << "Que horas são? ";
	cin >> h.horas;
	cin.ignore();
	cin >> h.minutos;

	ptr->horas++;
	MostrarHorario(ptr);

	return 0;
}

void MostrarHorario(const Horario* h)
{
	cout << "Seu relógio está atrasado, o horário correto é " << h->horas << ":" << h->minutos << "." << endl;
}
