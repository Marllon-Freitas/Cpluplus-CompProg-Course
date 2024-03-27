/*
Considere a seguinte declaração de registro:

struct candidato
{
 char nome[30];
 int notas[3];
};

  a. Escreva uma função que receba um registro candidato como argumento e mostre seu conteúdo.
  b. Escreva uma função que receba o endereço de um candidato e mostre o conteúdo do registro.
  c. Escreva uma função que receba um vetor de candidatos e mostre todo o conteúdo do vetor.
  d. Existe uma diferença na assinatura das funções usadas para resolver os itens “b” e “c”?
*/

#include <iostream>
using namespace std;

struct candidato
{
  char nome[30];
  int notas[3];
};

void mostrarCandidato(candidato);
void mostrarCandidato(candidato *);
void mostrarCandidatos(candidato[], int);

int main()
{
  candidato c1 = {"Pedro", {1, 10, 2}};
  candidato c2 = {"Lucas", {3, 6, 7}};
  candidato c3 = {"Maria", {7, 10, 4}};
  candidato c4 = {"Ana", {8, 7, 8}};

  cout << "Mostrando candidatos:" << endl;
  cout << "---------------------" << endl;
  cout << "Passando o registro pra função" << endl;
  mostrarCandidato(c1);

  cout << "Passando o endereço do registro pra função" << endl;
  mostrarCandidato(&c2);

  cout << "Passando um vetor de registros pra função" << endl;
  candidato candidatos[] = {c1, c2, c3, c4};
  mostrarCandidatos(candidatos, 4);

  return 0;
}

void mostrarCandidato(candidato c)
{
  cout << "Nome: " << c.nome << endl;
  cout << "Notas: ";
  for (int i = 0; i < 3; i++)
  {
    cout << c.notas[i] << " ";
  }
  cout << endl;
  cout << "---------------------" << endl;
}

void mostrarCandidato(candidato *c)
{
  cout << "Nome: " << c->nome << endl;
  cout << "Notas: ";
  for (int i = 0; i < 3; i++)
  {
    cout << c->notas[i] << " ";
  }
  cout << endl;
  cout << "---------------------" << endl;
}

void mostrarCandidatos(candidato candidatos[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    cout << "Nome: " << candidatos[i].nome << endl;
    cout << "Notas: ";
    for (int j = 0; j < 3; j++)
    {
      cout << candidatos[i].notas[j] << " ";
    }
    cout << endl;
  }
  cout << "---------------------" << endl;
}

/*
Resposta da questão "d": A única diferença é que quando estamos lidando com vetores de registros, precisamos passar o tamanho do vetor como
argumento para a função. porem, ambas recebem um ponteiro para um registro como argumento.
*/
