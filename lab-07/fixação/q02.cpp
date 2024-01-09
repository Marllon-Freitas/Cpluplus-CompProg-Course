/*
Escreva um programa que dê um sinal de alerta sonoro e peça uma senha
numérica. O programa deve usar uma função para emitir o sinal de alerta e outra
função para ler e retornar a senha. A função principal deve se encarregar das
demais tarefas. Use o caractere sublinhado para indicar o local (e a quantidade de
dígitos) da senha.

Iniciando com um som...
Digite sua senha: ______
Obrigado!

*/

#include <iostream>
using namespace std;

void beep();
int senha();

int main() {
	beep();
	cout << "Obrigado!" << endl;
	return 0;
}

void beep() {
	cout << "Iniciando com um som...\a" << endl;
	senha();
}

int senha() {
	int senha;
	cout << "Digite a senha: ________\b\b\b\b\b\b\b\b";
	cin >> senha;
	return senha;
}
