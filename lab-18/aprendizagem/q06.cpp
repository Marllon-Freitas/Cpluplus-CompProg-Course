/*
Defina um registro Pessoa que guarde o nome, idade e sexo de uma pessoa.
Escreva um programa que leia um número indeterminado de pessoas, parando de
ler apenas quando for digitada a palavra “fim” para o nome. Mostre a média de
idade do grupo.
*/

#include <iostream>
using namespace std;

struct Pessoa
{
  char nome[50];
  int idade;
  char sexo;
};

int main()
{
  Pessoa pessoa;
  int somatorioIdades = 0, qtdPessoas = 0;
  cout << "Digite o nome, idade e sexo da pessoa (fim para encerrar):" << endl;
  cin >> pessoa.nome;
  while (strcmp(pessoa.nome, "fim") != 0)
  {
    cin >> pessoa.idade >> pessoa.sexo;
    somatorioIdades += pessoa.idade;
    qtdPessoas++;
    cin >> pessoa.nome;
  }
  if (qtdPessoas > 0)
  {
    cout << "Foram cadastradas " << qtdPessoas << " pessoas." << endl;
    cout << "A média de idade do grupo é " << (float)somatorioIdades / qtdPessoas << " anos." << endl;
  }
  else
    cout << "Nenhuma pessoa foi cadastrada." << endl;
  return 0;
}
