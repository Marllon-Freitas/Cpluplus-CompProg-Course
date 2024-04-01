/*
Usando o código abaixo como ponto de partida, complete o programa fornecendo
as funções descritas. Observe que devem existir duas funções mostrar, uma para o
tipo String e outra para constantes strings, cada uma usando argumentos padrão.
Use const nos parâmetros quando for apropriado. O operador new deve ser usado
para alocar memória suficiente para guardar o texto no registro String.

#include <iostream>
#include <cstring>
using namespace std;
struct String
{
  char *str; // ponteiro para a string
  int comp;  // comprimento da string (sem contar '\0')
};
// protótipos para ajustar(), mostrar() e mostrar()
int main()
{
  String msg;
  char teste[] = "Realidade de ponteiros e strings\n";
  ajustar(msg, teste); // primeiro argumento é uma referência
                       // aloca espaço para guardar cópia de teste
                       // ajusta o membro str de msg para apontar
                       // para novo bloco, copia teste para o novo
                       // bloco e ajusta o membro comp
  mostrar(msg);        // mostra o membro String uma vez
  mostrar(msg, 2);     // mostra o membro String duas vezes
  teste[0] = 'D';
  teste[1] = 'u';
  mostrar(teste);    // mostra a string uma vez
  mostrar(teste, 3); // mostra a string três vezes
  mostrar("Pronto!");
  delete[] msg.str;
  return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct String
{
  char *str; // ponteiro para a string
  int comp;  // comprimento da string (sem contar '\0')
};

void ajustar(String &s, const char *texto);
void mostrar(const String &s, int vezes = 1);
void mostrar(const char *texto, int vezes = 1);

int main()
{
  String msg;
  char teste[] = "Realidade de ponteiros e strings\n";
  ajustar(msg, teste);
  mostrar(msg);
  mostrar(msg, 2);
  teste[0] = 'D';
  teste[1] = 'u';
  mostrar(teste);
  mostrar(teste, 3);
  mostrar("Pronto!");
  delete[] msg.str;
  return 0;
}

void ajustar(String &s, const char *texto)
{
  s.comp = strlen(texto);
  s.str = new char[s.comp + 1];
  strcpy(s.str, texto);
}

void mostrar(const String &s, int vezes)
{
  for (int i = 0; i < vezes; i++)
  {
    cout << s.str << endl;
  }
}

void mostrar(const char *texto, int vezes)
{
  for (int i = 0; i < vezes; i++)
  {
    cout << texto << endl;
  }
}
