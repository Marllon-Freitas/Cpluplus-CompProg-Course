
#include <iostream>
using namespace std;

int main()
{
  int hora, minuto;
  char separador;
  cout << "Que horas são? ";
  cin >> hora >> separador >> minuto;
  cout << "Seu relógio está atrasado." << endl;
  if (hora > 23)
  {
    cout << "Hora inválida." << endl;
    return 0;
  }
  else
  {
    hora = (hora + 1) % 24;
    cout << "Agora são " << (hora < 10 ? "0" : "") << hora << separador << minuto << endl;
  }
  return 0;
}