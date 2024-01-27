#include <iostream>
#include <string>
using namespace std;

struct livro
{
	string titulo;
	string autor;
	int ano;
};

struct jogo
{
	string titulo;
	string plataforma;
	int ano;
};

void emprestarLivro(livro[], int);
void exibirLivro(livro[], int);

void emprestarJogo(jogo[], int);
void exibirJogo(jogo[], int);

int main()
{
	const int MAX = 10;
	int opcao, quantidadeDeItemsASeremEmprestados;
	livro livros[MAX];
	jogo jogos[MAX];

	cout << "Deseja emprestar um livro ou um jogo?" << endl;
	cout << "0 - Jogo" << endl;
	cout << "1 - Livro" << endl;
	cout << "Opcao: ";
	cin >> opcao;
	cout << "Quantos items deseja emprestar? ";
	cin >> quantidadeDeItemsASeremEmprestados;

	if (opcao == 0)
	{
		emprestarJogo(jogos, quantidadeDeItemsASeremEmprestados);
		exibirJogo(jogos, quantidadeDeItemsASeremEmprestados);
	}
	else if (opcao == 1)
	{
		emprestarLivro(livros, quantidadeDeItemsASeremEmprestados);
		exibirLivro(livros, quantidadeDeItemsASeremEmprestados);
	}
	else
	{
		cout << "Opcao invalida." << endl;
	}

	return 0;
}

void emprestarLivro(livro livros[], int quantidadeDeItemsASeremEmprestados)
{
	for (int i = 0; i < quantidadeDeItemsASeremEmprestados; i++)
	{
		cout << "Livro " << i + 1 << endl;
		cout << "Digite o titulo do livro: ";
		cin.ignore();
		getline(cin, livros[i].titulo);

		cout << "Digite o autor do livro: ";
		cin.ignore();
		getline(cin, livros[i].autor);

		cout << "Digite o ano do livro: ";
		cin >> livros[i].ano;
	}
}

void exibirLivro(livro livros[], int quantidadeDeItemsASeremEmprestados)
{
	cout << endl
		<< "Livros emprestados:" << endl;
	for (int i = 0; i < quantidadeDeItemsASeremEmprestados; i++)
	{
		cout << "Livro " << i + 1 << endl;
		cout << "Titulo: " << livros[i].titulo << endl;
		cout << "Autor: " << livros[i].autor << endl;
		cout << "Ano: " << livros[i].ano << endl;
		cout << endl;
	}
}

void emprestarJogo(jogo jogos[], int quantidadeDeItemsASeremEmprestados)
{
	for (int i = 0; i < quantidadeDeItemsASeremEmprestados; i++)
	{
		cout << "Jogo " << i + 1 << endl;
		cout << "Digite o titulo do jogo: ";
		cin.ignore();
		getline(cin, jogos[i].titulo);

		cout << "Digite a plataforma do jogo: ";
		cin.ignore();
		getline(cin, jogos[i].plataforma);

		cout << "Digite o ano do jogo: ";
		cin >> jogos[i].ano;
	}
}

void exibirJogo(jogo jogos[], int quantidadeDeItemsASeremEmprestados)
{
	cout << endl
		<< "Jogos emprestados:" << endl;
	for (int i = 0; i < quantidadeDeItemsASeremEmprestados; i++)
	{
		cout << "Jogo " << i + 1 << endl;
		cout << "Titulo: " << jogos[i].titulo << endl;
		cout << "Plataforma: " << jogos[i].plataforma << endl;
		cout << "Ano: " << jogos[i].ano << endl;
		cout << endl;
	}
}
