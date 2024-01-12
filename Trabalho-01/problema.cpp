#include <iostream>
#include <cmath>
#include "genetico.h"
#include "binario.h"

using namespace std;

int main()
{
	// aceitando acentos no console
	system("chcp 1252 > nul");

	// variáveis
	unsigned short solucao[6], novaSolucao[4];

	cout << "Olá, bem vindo a nosso programa" << endl;
	cout << "Por favor, entre com 6 soluções iniciais (números entre 0 e 65535): " << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> solucao[i];
	}

	cout << "Soluções iniciais: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << solucao[i] << endl;
	}

	// aplicando cruzamento de ponto único entre as duas primeiras soluções fornecidas pelo usuário
	novaSolucao[0] = cruzamentoPontoUnico(solucao[0], solucao[1]);

	// aplicando cruzamento aritmético entre a terceira e quarta solução
	novaSolucao[1] = cruzamentoAritmetico(solucao[2], solucao[3]);

	// aplicando mutação simples sobre a quinta solução
	novaSolucao[2] = mutacaoSimples(solucao[4]);

	// aplicando mutação dupla sobre a sexta e última solução
	novaSolucao[3] = mutacaoDupla(solucao[5]);

	//avaliar
	cout << "Resultado da Avaliação" << endl;
	cout << "---------------------------------" << endl;
	for (int i = 0; i < 6; i++)
	{
		avaliar(solucao[i]);
	}
	cout << "---------------------------------" << endl;

	for (int i = 0; i < 4; i++)
	{
		avaliar(novaSolucao[i]);
	}

	return 0;
}
