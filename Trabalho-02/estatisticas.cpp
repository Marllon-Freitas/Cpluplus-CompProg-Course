#include <iostream>
using namespace std;
#include "concurso.h"

int main()
{
	system("chcp 1252 > nul"); // Acentuação
	int numeroParticipantes, numeroQuestoes;


	exibirLinha('*', 53);
	cout << "Concurso de Programacao\n" << endl;
	cout << "Qual o número de participantes? ";
	cin >> numeroParticipantes;
	cout << "Qual o número de questões? ";
	cin >> numeroQuestoes;
	cout << endl;
	exibirLinha('*', 53);

	questoes* vetorDinamicoDeQuestoes = new questoes[(numeroQuestoes * numeroParticipantes)];
	participante* vetorDinamicoDeParticipantes = new participante[numeroParticipantes];

	for (int i = 0; i < numeroParticipantes; i++)
	{
		vetorDinamicoDeParticipantes[i].ptrQuestoes = &vetorDinamicoDeQuestoes[i * numeroQuestoes];
	}

	for (int i = 0; i < numeroParticipantes; i++)
	{
		exibirLinha('-', 13);
		cout << "Participante: ";
		cin >> vetorDinamicoDeParticipantes[i].nome;
		exibirLinha('-', 13);
		cout << endl;

		for (int j = 0; j < numeroQuestoes; j++)
		{
			cout << "Questão " << (char)(j + 65) << ": " << endl;
			cout << "\tDificuldade: ";
			cin >> vetorDinamicoDeParticipantes[i].ptrQuestoes[j].grauDeDificuldade;
			cout << "\tInício: ";
			cin >> vetorDinamicoDeParticipantes[i].ptrQuestoes[j].horaInicio;
			cout << "\tFim: ";
			cin >> vetorDinamicoDeParticipantes[i].ptrQuestoes[j].horaFim;
		}

		exibirLinha('-', 13);
		cout << endl;
	}

	// Exibindo os dados
	exibirLinha('*', 53);
	cout << endl;
	exibirLinha('-', 23);
	cout << "Resumo por Participante" << endl;
	exibirLinha('-', 23);
	cout << endl;

	for (int i = 0; i < numeroParticipantes; i++)
	{
		cout << "Participante: " << vetorDinamicoDeParticipantes[i].nome << endl;
		exibirResumoPorParticipante((vetorDinamicoDeParticipantes + i)->ptrQuestoes, numeroQuestoes);
		cout << endl;

	}

	exibirLinha('-', 13);
	cout << endl;

	exibirLinha('-', 23);
	cout << "Resumo por Questão" << endl;
	exibirLinha('-', 23);
	cout << endl;

	exibirResumoPorQuestao(vetorDinamicoDeParticipantes, numeroParticipantes, numeroQuestoes);
	exibirLinha('-', 23);
	cout << endl;

	exibirLinha('-', 12);
	cout << "Estatísticas" << endl;
	exibirLinha('-', 12);
	cout << endl;

	media mediaTotal, mediaQuestao;

	for (int i = 0; i < numeroQuestoes; i++)
	{
		mediaQuestao = calcularMedia(vetorDinamicoDeQuestoes, numeroQuestoes * numeroParticipantes, i, numeroQuestoes);
		cout << fixed;
		cout.precision(2);
		cout << "Questão " << (char)(i + 65) << ": Dificuldade (" << mediaQuestao.grauDeDificuldade << ") - Tempo (" << mediaQuestao.tempo << " minutos)" << endl;
	}

	mediaTotal = calcularMedia(vetorDinamicoDeQuestoes, numeroQuestoes * numeroParticipantes, 0, 1);
	cout << fixed;
	cout.precision(2);
	cout << "Concurso: Dificuldade (" << mediaTotal.grauDeDificuldade << ") - Tempo (" << mediaTotal.tempo << " minutos)" << endl;


	delete[] vetorDinamicoDeQuestoes;
	delete[] vetorDinamicoDeParticipantes;

	return 0;
}