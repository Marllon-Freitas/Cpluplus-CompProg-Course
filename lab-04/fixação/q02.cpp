/*
Escreva uma função Linha() que, usando um único cout e sem usar repetições ou
saltos de linha, produza uma linha de tamanho fixo formada por 10 caracteres de
hífen. Escreva também uma função Pequena(), Media() e Grande() que façam uso
da função Linha() e de saltos de linha para obter linhas com 10, 20 e 30 hifens
respectivamente. O programa deve produzir a saída abaixo. A função Linha() não
deve ser chamada diretamente pela função main(), apenas Pequena(), Media() e
Grande() devem fazer uso dela.

----------
--------------------
------------------------------
Programação de Computadores
------------------------------
--------------------
----------
*/

#include <iostream>
#include <string>
using namespace std;

string Linha()
{
  return "----------";
}

void Pequena()
{
  cout << Linha() << endl;
}

void Media()
{
  cout << Linha() << Linha() << endl;
}

void Grande()
{
  cout << Linha() << Linha() << Linha() << endl;
}

int main()
{
  Pequena();
  Media();
  Grande();
  cout << "Programação de Computadores" << endl;
  Grande();
  Media();
  Pequena();
  return 0;
}