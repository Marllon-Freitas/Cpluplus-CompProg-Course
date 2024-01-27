/*
Crie uma função para ler, exibir e subtrair elementos do tipo horário, definidos
como na questão anterior. Peça ao usuário para entrar com o horário de início e
fim da sua aula de programação. Exiba quantos minutos de aula existem entre os
dois horários, como no exemplo abaixo:

Início: 13:55
Fim: 15:45
Entre 13:55 e 15:45 existem 110 minutos, isto é, 1h e 50 minutos.

Sugestão: faça uma versão com funções normais e depois faça outra versão que
utiliza os operadores para cin, cout e subtração no lugar das funções.

*/

#include <iostream>
using namespace std;

struct horario
{
	int hora;
	int minuto;
};

ostream& operator<<(ostream&, horario);
istream& operator>>(istream&, horario&);
horario operator-(horario, horario);

int main()
{
	horario inicio, fim, diferenca;

	cout << "Digite o horario de inicio: ";
	cin >> inicio;

	cout << "Digite o horario de fim: ";
	cin >> fim;

	diferenca = fim - inicio;

	cout << "Entre " << inicio << " e " << fim << " existem " << diferenca.hora * 60 + diferenca.minuto << " minutos, isto é, " << diferenca.hora << "h e " << diferenca.minuto << " minutos." << endl;

	return 0;
}

horario operator-(horario fim, horario inicio)
{
	horario diferenca;

	diferenca.hora = fim.hora - inicio.hora;
	diferenca.minuto = fim.minuto - inicio.minuto;

	if (diferenca.hora <= 0)
	{
		diferenca.hora += 24;
	}

	if (diferenca.minuto < 0)
	{
		diferenca.minuto += 60;
		diferenca.hora--;
	}

	return diferenca;
}

istream& operator>>(istream& input, horario& horarioLido)
{
	char doisPontos;
	input >> horarioLido.hora >> doisPontos >> horarioLido.minuto;
	return input;
}

ostream& operator<<(ostream& output, horario horarioLido)
{
	output << horarioLido.hora << ":" << horarioLido.minuto;
	return output;
}
