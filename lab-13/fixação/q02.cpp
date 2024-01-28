/*
Considerando o programa abaixo, modifique-o para que o tipo “mês” possa ser
usado com cin e cout

#include <iostream>
using namespace std;
enum mes {Jan=1,Fev,Mar,Abr,Mai,Jun,Jul,Ago,Set,Out,Nov,Dez};
int main()
{
 mes inicio, fim;
 inicio = Mar; // inicio do semestre
 fim = Jun; // fim do semestre
 cout << "Digite o número do mês atual: ";
 int atual;
 cin >> atual;

 if (atual >= inicio && atual <= fim)
 cout << "Você está em período de aulas.\n";
 else
 cout << "Férias!\n";
 return 0;
}

*/

#include <iostream>
using namespace std;

enum mes
{
  Jan = 1,
  Fev,
  Mar,
  Abr,
  Mai,
  Jun,
  Jul,
  Ago,
  Set,
  Out,
  Nov,
  Dez
};

istream & operator>>(istream &, mes &);
ostream & operator<<(ostream &, mes &);

int main()
{
  mes inicio, fim;
  inicio = Mar; // inicio do semestre
  fim = Jun;    // fim do semestre
  cout << "Digite o número do mês atual: ";
  mes atual;
  cin >> atual;

  if (atual >= inicio && atual <= fim)
    cout << "Você está em período de aulas.\n";
  else
    cout << "Férias!\n";
  return 0;
}

istream & operator>>(istream &i, mes &m)
{
  int n;
  i >> n;
  m = (mes)n;
  return i;
}

ostream & operator<<(ostream &o, mes &m)
{
  o << (int)m;
  return o;
}

