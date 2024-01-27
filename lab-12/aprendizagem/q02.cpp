/*
Defina um registro Palavra para armazenar 3 strings, uma para cada tradução de
uma palavra, em português, inglês e espanhol. Em seguida crie um vetor do tipo
Palavra chamado dicionário, com espaço para dez palavras. Inicialize o vetor com 2
palavras de sua escolha, lembrando que cada palavra deve estar nas três línguas.
Por fim, peça para que o usuário entre com as informações para mais uma palavra,
armazene-a no vetor e mostre todas as palavras do dicionário.

*/

#include <iostream>
#include <cstring>
using namespace std;

struct palavra
{
	string portugues;
	string ingles;
	string espanhol;
};

int main()
{
	palavra dicionario[10] = { { "cachorro", "dog", "perro" }, { "gato", "cat", "gato" } };
	palavra novaPalavra;

	cout << "Digite uma palavra em portugues: ";
	cin >> novaPalavra.portugues;

	cout << "Agora em ingles: ";
	cin >> novaPalavra.ingles;

	cout << "Agora em espanhol: ";
	cin >> novaPalavra.espanhol;

	dicionario[2] = novaPalavra;

	cout << endl << "Dicionario:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Palavra " << i + 1 << endl;
		cout << "Portugues: " << dicionario[i].portugues << endl;
		cout << "Ingles: " << dicionario[i].ingles << endl;
		cout << "Espanhol: " << dicionario[i].espanhol << endl;
		cout << endl;
	}
  
	return 0;
}
