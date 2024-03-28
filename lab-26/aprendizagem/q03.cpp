/*
Crie uma função chamada FirstName e outra chamada LastName. As funções
devem receber uma string de origem e uma string de destino. A string de origem
deve conter o nome completo de uma pessoa. As funções devem copiar para a
string de destino, respectivamente, o primeiro e o último nome da pessoa. No
programa principal leia vários nomes completos e exiba os resultados das funções,
como no exemplo abaixo

Entre com os nomes a cadastrar (‘.’ para encerrar):
Júnior Lima da Silva
Silva, Júnior
Benedito Nogueira Ramalho
Ramalho, Benedito
Ricardo Amaral Neto
Neto, Ricardo
Jamile Osório de Paula
Paula, Jamile
*/

#include <iostream>
#include <cstring>
using namespace std;

void pegarPrimeiroNome(char *origem, char *destino);
void pegarUltimoNome(char *origem, char *destino);

int main()
{
  cout << "Entre com os nomes a cadastrar ('.' para encerrar):" << endl;
  char nome[100];
  cin.getline(nome, 100);
  while (strcmp(nome, "."))
  {
    char primeiroNome[100];
    char ultimoNome[100];
    pegarPrimeiroNome(nome, primeiroNome);
    pegarUltimoNome(nome, ultimoNome);
    cout << ultimoNome << ", " << primeiroNome << endl;
    cin.getline(nome, 100);
  }
  return 0;
}

void pegarPrimeiroNome(char *origem, char *destino)
{
  int i = 0;
  while (origem[i] != ' ')
  {
    destino[i] = origem[i];
    ++i;
  }
  destino[i] = '\0';
}

void pegarUltimoNome(char *origem, char *destino)
{
  int i = strlen(origem) - 1;
  while (origem[i] != ' ')
  {
    --i;
  }
  ++i;
  int j = 0;
  while (origem[i] != '\0')
  {
    destino[j] = origem[i];
    ++i;
    ++j;
  }
  destino[j] = '\0';
}