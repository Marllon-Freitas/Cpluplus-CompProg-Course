/*
Usando as funções criadas na questão anterior, peça ao usuário para digitar uma
letra, e posteriormente pergunte se ele quer decodificar ou codificar a letra
recebida, pedindo para que ele entre com 1 se desejar codificar e com 0 se desejar
decodificar. Utilize uma estrutura if else como exemplificado abaixo:

if (resposta == true)
 codificar(ch);
else
 decodificar(ch);

*/

#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
  char c;
  int op;
  cout << "Informe um caractere: ";
  cin >> c;
  cout << "Informe 1 para codificar ou 0 para decodificar: ";
  cin >> op;
  if (op == 1)
    cout << "Codificando " << c << " temos " << codificar(c) << endl;
  else
    cout << "Decodificando " << c << " temos " << decodificar(c) << endl;
  return 0;
}

char codificar(char c)
{
  return c + 3;
}

char decodificar(char c)
{
  return c - 3;
}
