/*
Utilize instruções cin para ler o valor de horas e minutos para variáveis diferentes.
Que horas são? 15:50
15 horas
50 minutos
*/
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1252 > nul"); //
  int horas, minutos;
  char separador;
  cout << "Que horas são? ";
  cin >> horas >> separador >> minutos;
  cout << horas << " horas" << endl;
  cout << minutos << " minutos" << endl;

  return 0;
}
