/*
Construa um vetor dinâmico de alunos. O registro aluno deve ser composto por
nome (ou matrícula), código da disciplina (número inteiro sem sinal), e situação da
disciplina. A situação da disciplina deve ser uma enumeração com os valores:
Aprovado, Trancado, Reprovado. Peça ao usuário para digitar o número de alunos
do vetor e em seguida leia os dados do primeiro aluno. Para finalizar mostre os
dados do primeiro aluno usando uma função que recebe um ponteiro para aluno.

*/

#include <iostream>
using namespace std;

enum Situacao
{
	Aprovado,
	Trancado,
	Reprovado
};

union id
{
	char nome[20];
	int matricula;
};

struct Aluno
{
	id identificador;
	unsigned int codigoDisciplina;
	Situacao situacao;
};

void exibirAluno(Aluno* pt);

int main()
{
	int n;
	cout << "Digite o número de alunos: ";
	cin >> n;

	Aluno* vetorDinamicoDeAlunos = new Aluno[n];
	cout << "Aluno 01: \n";
	cout << "Digite o nome do aluno: ";
	cin >> vetorDinamicoDeAlunos[0].identificador.nome;
	cout << "Digite o código da disciplina: ";
	cin >> vetorDinamicoDeAlunos[0].codigoDisciplina;
	cout << "Digite a situação do aluno (0 - Aprovado, 1 - Trancado, 2 - Reprovado): ";
	int situacao;
	cin >> situacao;
	vetorDinamicoDeAlunos[0].situacao = Situacao(situacao);

	exibirAluno(&vetorDinamicoDeAlunos[0]);

	delete[] vetorDinamicoDeAlunos;
	return 0;
}

void exibirAluno(Aluno* pt)
{
	cout << "Nome: " << pt->identificador.nome << endl;
	cout << "Código da disciplina: " << pt->codigoDisciplina << endl;
	cout << "Situação: ";
	switch (pt->situacao)
	{
	case Aprovado:
		cout << "Aprovado" << endl;
		break;
	case Trancado:
		cout << "Trancado" << endl;
		break;
	case Reprovado:
		cout << "Reprovado" << endl;
		break;
	}
}