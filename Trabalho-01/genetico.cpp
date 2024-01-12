#include <iostream>
#include "binario.h"
using namespace std;

#define PESO_MAXIMO 20
#define NUMERO_ITENS 16

#define PESO_1 12
#define PESO_2 3
#define PESO_3 5
#define PESO_4 4
#define PESO_5 9
#define PESO_6 1
#define PESO_7 2
#define PESO_8 3
#define PESO_9 4
#define PESO_10 1
#define PESO_11 2
#define PESO_12 4
#define PESO_13 5
#define PESO_14 2
#define PESO_15 4
#define PESO_16 1

#define VALOR_1 4
#define VALOR_2 4
#define VALOR_3 8
#define VALOR_4 10
#define VALOR_5 15
#define VALOR_6 3
#define VALOR_7 1
#define VALOR_8 1
#define VALOR_9 2
#define VALOR_10 10
#define VALOR_11 20
#define VALOR_12 15
#define VALOR_13 10
#define VALOR_14 3
#define VALOR_15 4
#define VALOR_16 12

#define padrao "\033[m"
#define green "\033[32m"
#define red "\033[0;31m "

// função de avaliação:
bool avaliar(unsigned short valor)
{
	unsigned short peso = 0;
	unsigned short valorTotal = 0;

	for (int i = 0; i < NUMERO_ITENS; i++)
	{
		if (testarBit(valor, i) == 1)
		{
			switch (i)
			{
			case 0:
				peso += PESO_16;
				valorTotal += VALOR_16;
				break;
			case 1:
				peso += PESO_15;
				valorTotal += VALOR_15;
				break;
			case 2:
				peso += PESO_14;
				valorTotal += VALOR_14;
				break;
			case 3:
				peso += PESO_13;
				valorTotal += VALOR_13;
				break;
			case 4:
				peso += PESO_12;
				valorTotal += VALOR_12;
				break;
			case 5:
				peso += PESO_11;
				valorTotal += VALOR_11;
				break;
			case 6:
				peso += PESO_10;
				valorTotal += VALOR_10;
				break;
			case 7:
				peso += PESO_9;
				valorTotal += VALOR_9;
				break;
			case 8:
				peso += PESO_8;
				valorTotal += VALOR_8;
				break;
			case 9:
				peso += PESO_7;
				valorTotal += VALOR_7;
				break;
			case 10:
				peso += PESO_6;
				valorTotal += VALOR_6;
				break;
			case 11:
				peso += PESO_5;
				valorTotal += VALOR_5;
				break;
			case 12:
				peso += PESO_4;
				valorTotal += VALOR_4;
				break;
			case 13:
				peso += PESO_3;
				valorTotal += VALOR_3;
				break;
			case 14:
				peso += PESO_2;
				valorTotal += VALOR_2;
				break;
			case 15:
				peso += PESO_1;
				valorTotal += VALOR_1;
				break;
			default:
				break;
			}
		}
	}

	cout << valor << " – $" << valorTotal << " – " << peso << "Kg – ";
	if (peso <= PESO_MAXIMO)
	{
		cout << green << "OK" << padrao << endl;
	}
	else
	{
		cout << red << "X" << padrao << endl;
	}

	return peso <= PESO_MAXIMO;
}

// função de cruzamento por ponto único:
unsigned short cruzamentoPontoUnico(unsigned short a, unsigned short b)
{
	return bitsAltos(a) + bitsBaixos(b);
}

// função de cruzamento aritmético:
unsigned short cruzamentoAritmetico(unsigned short a, unsigned short b)
{
	return andBinario(a, b);
}

// função de mutação simples:
unsigned short mutacaoSimples(unsigned short a)
{
	if (testarBit(a, 9) == 1)
	{
		return desligarBit(a, 9);
	}
	else
	{
		return ligarBit(a, 9);
	}
}

// função de mutação dupla:
unsigned short mutacaoDupla(unsigned short a)
{
	if (testarBit(a, 3) == 1)
	{
		a = desligarBit(a, 3);
	}
	else
	{
		a = ligarBit(a, 3);
	}
	if (testarBit(a, 12) == 1)
	{
		a = desligarBit(a, 12);
	}
	else
	{
		a = ligarBit(a, 12);
	}

	return a;
}
