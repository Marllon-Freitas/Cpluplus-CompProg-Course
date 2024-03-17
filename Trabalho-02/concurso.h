#pragma once
//Declaração dos registros e funções utilizadas no programa.

//------------------------- Registros -------------------------
struct horario
{
	int hora;
	int minuto;
};

struct questoes
{
	int grauDeDificuldade;
	horario horaInicio;
	horario horaFim;
};

struct media
{
	float grauDeDificuldade;
	float tempo;
};

struct participante
{
	char nome[30];
	questoes* ptrQuestoes;
};
//-------------------------------------------------------------


//------------------------- Funções -------------------------
//Funções de manipulação de horários.
ostream& operator<<(ostream&, horario&);
istream& operator>>(istream&, horario&);
int operator-(horario, horario);

void exibirResumoPorQuestao(participante* participantes, int numParticipantes, int numQuestoes);

void exibirResumoPorParticipante(questoes* questao, int quantidade);

media calcularMedia(questoes* questao, int tamanho, int inicio, int passo);

void exibirLinha(char caractere, int tamanho);
//-------------------------------------------------------------