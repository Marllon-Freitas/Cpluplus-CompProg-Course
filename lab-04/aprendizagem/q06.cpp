/*
Escreva uma função Inicializar() que se utiliza de quatro outras funções para
cumprir sua tarefa: a função deve escrever a mensagem “Inicializando sistema:”,
chamar a função ligar(), verificar() e ativar() e em seguida escrever “Inicialização
concluída”. Para simular o resultado da inicialização, a função Inicializar() deve
retornar um valor inteiro aleatório, obtido com uma chamada da função rand().
A função rand() pertence a biblioteca <cstdlib> e retorna um número aleatório
entre 0 e 32767 cada vez que é chamada. As funções ligar(), verificar() e ativar()
devem ser criadas para exibir mensagens, como no exemplo abaixo.
Caso o resultado retornado por Inicializar() seja maior que 16384, o programa
deve exibir “Sistema em funcionamento”, caso contrário ele deve exibir “Falha na
inicialização”.

Inicializando Sistema:
- Ligando dispositivos
- Verificando integridade
- Ativando processos
Inicialização concluída.
Sistema em funcionamento.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int inicializar();
void ligar(void);
void verificar(void);
void ativar(void);

int main()
{
	srand(time(NULL));
	if (inicializar() > 16384)
		cout << "Sistema inicializado com sucesso." << endl;
	else
		cout << "Falha na inicialização." << endl;
	return 0;
}

int inicializar()
{
	int i;
	i = rand();
	cout << "Inicializando Sistema:" << endl;
	ligar();
	verificar();
	ativar();
	cout << "Inicialização concluída.\n" << endl;
	return i;
}

void ligar(void)
{
	cout << "- Ligando dispositivos:" << endl;
}

void verificar(void)
{
	cout << "- Ativando processos:" << endl;
}

void ativar(void)
{
	cout << "- Ativando Sistema:" << endl;
}