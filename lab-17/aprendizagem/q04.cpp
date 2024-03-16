/*
Declare um registro "Login" com os campos nome e senha. Crie uma variável desse
tipo e armazene o login do administrador do sistema. Peça ao usuário para entrar
com seu nome e senha e verifique se os valores digitados são iguais aos do
administrador. Se estiverem corretos, exiba a mensagem "Login e senha corretos".
A verificação deve ser feita através de um laço for, que deve comparar cada um
dos vetores, caractere a caractere.
*/

#include <cstring>
#include <iostream>
using namespace std;

const int TAM_LOGIN = 100;
const int TAM_SENHA = 100;

struct Login {
	char nome[TAM_LOGIN];
	char senha[TAM_SENHA];
};

int main() {
	Login adm = { "adm", "123456" };
	Login usuario;
	cout << "Digite seu nome: ";
	cin.getline(usuario.nome, 100);
	cout << "Digite sua senha: ";
	cin.getline(usuario.senha, 100);

	cout << "Verificando se suas credenciais estão corretas..." << endl;
	for (int i = 0; i < strlen(adm.nome); i++) {
		if (adm.nome[i] != usuario.nome[i]) {
			cout << "Nome incorreto" << endl;
			return 1;
		}
	}
	for (int i = 0; i < strlen(adm.senha); i++) {
		if (adm.senha[i] != usuario.senha[i]) {
			cout << "Senha incorreta" << endl;
			return 1;
		}
	}
	cout << "Login e senha corretos!" << endl;

	return 0;
}
