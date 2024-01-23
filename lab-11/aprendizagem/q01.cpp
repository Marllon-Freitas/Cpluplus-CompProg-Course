/*
Defina uma senha por meio de um vetor de caracteres no seu programa. Peça ao
usuário que digite a senha dele. Verifique se ele digitou a senha correta, se sim
mostre a mensagem "senha correta", se não mostre a mensagem "senha incorreta".
Para comparar strings, pesquise sobre como usar a função strcmp.

Digite a senha: ProgComp
Senha incorreta.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char senha[] = "ProgComp";
	char senhaUsuario[100];

	cout << "Digite a senha: ";
	cin >> senhaUsuario;

	if (strcmp(senha, senhaUsuario) == 0)
		cout << "Senha correta." << endl;
	else
		cout << "Senha incorreta." << endl;

	return 0;
}
