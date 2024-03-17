#include <iostream>
using namespace std;
#include "concurso.h"

int operator-(horario h1, horario h2)
{
	int diferenca = 0;
	int min1 = h1.hora * 60 + h1.minuto;
	int min2 = h2.hora * 60 + h2.minuto;
	diferenca = min1 - min2;

	if (diferenca < 0)
	{
		diferenca = 1440 + diferenca; //24 horas em minutos
	}
	return diferenca;

}

istream& operator >> (istream& input, horario& horarioLido)
{
	char doisPontos;
	input >> horarioLido.hora >> doisPontos >> horarioLido.minuto;
	return input;
}

ostream& operator<<(ostream& os, horario& h)
{
	if (h.hora < 10)
	{
		os << "0";
	}
	os << h.hora << ":";
	if (h.minuto < 10)
	{
		os << "0";
	}
	os << h.minuto;
	return os;
}

void exibirLinha(char caractere, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		cout << caractere;
	}
	cout << endl;
}

void exibirResumoPorParticipante(questoes* questao, int numQuestoesAExibir)
{
	for (int i = 0; i < numQuestoesAExibir; i++)
	{
		cout << "\t"; cout << (char)(i + 65);
		cout << " (" << (questao + i)->grauDeDificuldade << ") ";
		cout << (questao + i)->horaInicio << " as " << (questao + i)->horaFim;
		cout << " (" << (questao + i)->horaFim - (questao + i)->horaInicio << " min)";
		cout << endl;
	}
}

void exibirResumoPorQuestao(participante* participantes, int numParticipantes, int numQuestoes) {
	for (int i = 0; i < numQuestoes; i++) {
		cout << "Questão " << (char)(i + 65) << ": " << endl;
		for (int j = 0; j < numParticipantes; j++) {
			questoes* questao = &participantes[j].ptrQuestoes[i];
			cout << "\t" << participantes[j].nome << " (" << questao->grauDeDificuldade << ") ";
			cout << questao->horaInicio << " às " << questao->horaFim;
			cout << " (" << questao->horaFim - questao->horaInicio << " min)\n";
		}
	}
}

media calcularMedia(questoes* questao, int numQuestoes, int indiceInicial, int tamanhoPasso)
{
	media mediaCalculada;
	mediaCalculada.grauDeDificuldade = 0;
	mediaCalculada.tempo = 0;
	int contador = 0;
	for (int i = indiceInicial; i < numQuestoes; i += tamanhoPasso)
	{
		mediaCalculada.grauDeDificuldade += (questao + i)->grauDeDificuldade;
		mediaCalculada.tempo += (questao + i)->horaFim - (questao + i)->horaInicio;
		contador++;
	}
	mediaCalculada.grauDeDificuldade /= contador;
	mediaCalculada.tempo /= contador;
	return mediaCalculada;
}
