/*
Escreva uma função que receba uma string por parâmetro e retorne um valor
inteiro indicando quantas palavras existem na string. No programa principal leia
uma string do usuário para testar a função. Use const sempre que pertinente.

Entre com uma frase:
Hoje em dia é difícil conhecer tudo.
Existem 7 palavras nesta frase!
*/

#include <iostream>
#include <string>

using namespace std;

int contarPalavras(const string &frase);

int main()
{
  cout << "Entre com uma frase: ";
  string frase;
  getline(cin, frase);
  int numPalavras = contarPalavras(frase);
  cout << "Existem " << numPalavras << " palavras nesta frase!" << endl;
  return 0;
}

int contarPalavras(const string &frase)
{
  int contador = 0;
  bool palavra = false;
  for (char c : frase)
  {
    if (isspace(c))
    {
      palavra = false;
    }
    else if (!palavra)
    {
      palavra = true;
      ++contador;
    }
  }
  return contador;
}
