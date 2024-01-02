/*
Corrija o programa abaixo para que ele funcione corretamente.
#include <iostrem>
void Main ()
{
 int segundos, int minutos;
 cout << Digite uma quantidade de minutos:
 cin >> minutos
 cout << Existem << segundos << " segundos em "
 << minutos << minutos.
 segundos = 100 * minutos;
 Cout << endl;
 sistema("pausa");
 retorna NULL;
}
Se o usuário digitar 2, o programa deve imprimir:
Existem 120 segundos em 2 minutos.
*/

#include <iostream>
using namespace std;

int main()
{
  int segundos, minutos;
  cout << "Digite uma quantidade de minutos: \n";
  cin >> minutos;
  segundos = 60 * minutos;
  cout << "Existem " << segundos << " segundos em " << minutos << " minutos.";
  cout << endl;
  system("pause");
  return 0;
}
