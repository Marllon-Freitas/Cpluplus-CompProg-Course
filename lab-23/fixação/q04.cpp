/*
Escreva um programa que mostre o nome usado para identificar a unidade de
disco C no computador e o número de série do volume.
Dica: estas informações são mostradas no console (prompt de comando) ao se
executar o comando vol (ou dir). Dentro do seu programa, utilize a função system
para executar o comando vol e redirecioná-lo para um arquivo texto e em seguida
extraia as informações do arquivo:
system("vol > vol.txt");
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  system("vol > vol.txt");
  ifstream file("vol.txt");

  if (!file.is_open())
  {
    {
      cout << "Abertura do arquivo vol.txt falhou!" << endl;
      cout << "Programa encerrando.\n";
      exit(EXIT_FAILURE);
    }
  }

  char line[50];
  while (!file.eof())
  {
    file.getline(line, 50);
    cout << line << endl;
  }

  file.close();
  return 0;
}