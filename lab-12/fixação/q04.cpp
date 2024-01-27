/*
Altere o programa anterior de forma que cin e cout possam ser usados para ler e
exibir datas. Além disso, a subtração de variáveis tipo data deve resultar no
número de dias entre as duas datas. Refaça o programa principal para usar cin,
cout e subtração com datas.

*/

#include <iostream>
using namespace std;

struct dataBase
{
  int dia;
  int mes;
  int ano;
};

ostream &operator<<(ostream &, dataBase);
istream &operator>>(istream &, dataBase &);
int operator-(dataBase, dataBase);

int main()
{
  dataBase nascimento, hoje;

  cout << "Data de nascimento: ";
  cin >> nascimento;

  cout << "Data de hoje: ";
  cin >> hoje;

  cout << "Você tem " << nascimento - hoje << " dias de vida." << endl;
  return 0;
}

int operator-(dataBase nascimento, dataBase hoje)
{
  int diasDeVida = 0;

  diasDeVida += (hoje.ano - nascimento.ano) * 365;
  diasDeVida += (hoje.mes - nascimento.mes) * 31;
  diasDeVida += (hoje.dia - nascimento.dia);

  return diasDeVida;
}

ostream &operator<<(ostream &output, dataBase data)
{
  output << data.dia << "/" << data.mes << "/" << data.ano;
  return output;
}

istream &operator>>(istream &input, dataBase &data)
{
  char barra;
  input >> data.dia >> barra >> data.mes >> barra >> data.ano;
  return input;
}
