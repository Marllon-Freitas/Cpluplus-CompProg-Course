/*
Construa um programa que leia uma lista de nomes completos. O programa deve
encerrar a leitura apenas quando for digitado o nome “fim”. Passe cada nome
completo para uma função que deve colocar as primeiras letras de cada parte do
nome para maiúsculo e o restante para minúsculo, como mostrado no exemplo
abaixo. A função deve retornar um booleano indicando se alguma alteração foi
feita no nome original. O programa principal deve usar o valor de retorno para
indicar se o nome foi ou não corrigido. Observe que o programa não põe para
maiúsculo os nomes que tenham dois ou menos caracteres, como os conectores
“da” e “de”.

Entre com os nomes dos aprovados (fim para encerrar):
Pedro henrique augustiNO
Pedro Henrique Augustino <-- Corrigido
joão baldo de albuquerque
João Baldo de Albuquerque <-- Corrigido
RIVALDO VIANA DA CRUZ
Rivaldo Viana da Cruz <-- Corrigido
Eveline da Silva Bastos
Eveline da Silva Bastos <-- OK
fim
*/

#include <iostream>
using namespace std;

bool corrigirNome(char *nome);

int main()
{
  cout << "Entre com os nomes dos aprovados (fim para encerrar):" << endl;
  char nome[100];
  cin.getline(nome, 100);
  while (strcmp(nome, "fim"))
  {
    if (corrigirNome(nome))
    {
      cout << nome << " <-- Corrigido" << endl;
    }
    else
    {
      cout << nome << " <-- OK" << endl;
    }
    cin.getline(nome, 100);
  }
  return 0;
}

bool corrigirNome(char *nome)
{
  bool corrigido = false;
  bool maiuscula = true;
  int contador = 0;

  for (int i = 0; nome[i] != '\0'; ++i)
  {
    if (nome[i] == ' ' || nome[i + 1] == '\0')
    {
      if (contador > 2 && islower(nome[i - contador]))
      {
        nome[i - contador] = toupper(nome[i - contador]);
        corrigido = true;
      }
      else if (contador <= 2 && isupper(nome[i - contador]))
      {
        nome[i - contador] = tolower(nome[i - contador]);
        corrigido = true;
      }
      if (isupper(nome[i]) && contador > 2)
      {
        nome[i] = tolower(nome[i]);
        corrigido = true;
      }
      contador = 0;
      maiuscula = true;
    }
    else if (isalpha(nome[i]))
    {
      if (!maiuscula && isupper(nome[i]))
      {
        nome[i] = tolower(nome[i]);
        corrigido = true;
      }
      maiuscula = false;
      ++contador;
    }
  }
  return corrigido;
}