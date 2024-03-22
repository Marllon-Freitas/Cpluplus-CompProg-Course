/*
Escreva um programa que abra um arquivo texto, leia caractere a caractere até o
fim do arquivo e exiba na tela o número total de caracteres, o número de vogais, o
número de consoantes, e a quantidade de outros caracteres presentes no texto.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  char ch;
  int total = 0, vogais = 0, consoantes = 0, outros = 0;

  fin.open("texto.txt");
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo texto.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  while (fin.get(ch))
  {
    total++;
    if (isalpha(ch))
    {
      char c = tolower(ch);
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      {
        vogais++;
      }
      else
      {
        consoantes++;
      }
    }
    else
    {
      outros++;
    }
  }

  cout << "Total de caracteres: " << total << endl;
  cout << "Vogais: " << vogais << endl;
  cout << "Consoantes: " << consoantes << endl;
  cout << "Outros: " << outros << endl;
  fin.close();

  return 0;
}