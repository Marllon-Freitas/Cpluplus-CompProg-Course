/*
Considere os seguintes fragmentos de código para a contagem de espaços e novas
linhas. Que vantagem a segunda forma tem sobre a primeira?

1ª versão
while (ch != '.')
{
 if (ch == ' ')
 espaço++;
 if (ch == '\n')
 novalinha++;
}

2ª versão
while (ch != '.')
{
 if (ch == ' ')
 espaço++;
 else if (ch == '\n')
 novalinha++;
}
*/

#include <iostream>
using namespace std;

int main()
{
  char ch;
  int espaço = 0, novalinha = 0;
  while (ch != '.')
  {
    if (ch == ' ')
      espaço++;
    if (ch == '\n')
      novalinha++;
  }

  while (ch != '.')
  {
    if (ch == ' ')
      espaço++;
    else if (ch == '\n')
      novalinha++;
  }
  return 0;
}

// Resposta:
// A segunda forma tem a vantagem de não verificar a segunda condição se a primeira
// for verdadeira, o que economiza tempo de processamento.