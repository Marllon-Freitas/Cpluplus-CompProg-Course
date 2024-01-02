/*
Construa um programa que peça ao usuário o horário atual. Declare variáveis para
receber a hora e os minutos separadamente. Após receber o horário atual, diga ao
usuário que o relógio dele está uma hora atrasado, e mostre o horário certo, com a
hora adiantada em uma hora. 
Que horas são? 10:54
O seu relógio está atrasado.
Agora são 11:54.
*/

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