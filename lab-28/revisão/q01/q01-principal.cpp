/*
Suponha que todas as funções de um programa precisem acessar um ponteiro
global chamado print. O ponteiro é definido na função principal e acessado por
funções em outros arquivos. Construa a função mensagem() em um outro arquivo
de código fonte de forma que ela utilize print para obter a saída abaixo:

Usar print normal [s/n]? s
Finalizando programa!

Usar print normal [s/n]? n
<<< Finalizando programa! >>>

#include <iostream>
using namespace std;
void (*print)(const char[]); // ponteiro global
void normal(const char texto[]);
void alternativo(const char texto[]);
void mensagem();
int main()
{
  cout << "Usar print normal [s/n]? ";
  char opcao;
  cin >> opcao;
  if (opcao == 's')
    print = normal;
  else
    print = alternativo;
  mensagem();
}
void normal(const char texto[])
{
  cout << texto << endl;
}
void alternativo(const char texto[])
{
  cout << "<<< " << texto << " >>>" << endl;
}
*/

#include <iostream>
using namespace std;

void (*print)(const char[]); // ponteiro global

void normal(const char texto[]);
void alternativo(const char texto[]);
void mensagem();

int main()
{
  cout << "Usar print normal [s/n]? ";
  char opcao;
  cin >> opcao;
  if (opcao == 's')
    print = normal;
  else
    print = alternativo;
  mensagem();
}

void normal(const char texto[])
{
  cout << texto << endl;
}

void alternativo(const char texto[])
{
  cout << "<<< " << texto << " >>>" << endl;
}