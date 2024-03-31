/*
A função operator<< pode ser utilizada para ensinar ao cout como exibir
variáveis de um tipo definido pelo programador. Utilize referências para
construir uma função operator<< que exiba um par de elementos na tela. Use o
mesmo tipo par definido na questão 4 dos exercícios de fixação. Agora
construa um programa para ler um arquivo texto contendo um número
indefinido de pares de números separados por espaço e exiba-os com cout, de
forma que cada par seja exibido como mostrado abaixo:

Pares: [2,4] [3,7] [8,5] [9,2]
*/

#include <iostream>
#include <fstream>
using namespace std;

struct par
{
  int x;
  int y;
};

ostream &operator<<(ostream &os, const par &p)
{
  os << "[" << p.x << "," << p.y << "]";
  return os;
}

int main()
{
  ifstream fin;

  fin.open("pares.txt");

  if (!fin.is_open())
  {
    cout << "Abertura do arquivo pares.txt falhou.\n";
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  par p;
  cout << "Pares: ";
  while (fin >> p.x >> p.y)
  {
    cout << p << " ";
  }
  cout << endl;

  fin.close();
  return 0;
}