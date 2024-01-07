/*
A empresa Viagens&Turismo possui uma linha de ônibus fazendo o trecho
Mossoró-Natal. Considerando que as viagens são feitas sempre dentro de um
mesmo dia, elabore um programa que permita ao usuário informar o momento de
partida e de chegada (hora e minuto) do ônibus. O programa deve calcular o tempo
total da viagem (em horas e minutos).

Digite o horário de partida (HH:MM): 10:50
Digite o horário de chegada (HH:MM): 14:20
O tempo total de viagem foi 3 horas e 30 min.

*/

#include <iostream>
using namespace std;

int main()
{
  int hora_partida, minuto_partida, hora_chegada, minuto_chegada, hora_total, minuto_total;
  cout << "Digite o horário de partida (HH:MM): ";
  cin >> hora_partida;
  cin.ignore(1);
  cin >> minuto_partida;
  cout << "Digite o horário de chegada (HH:MM): ";
  cin >> hora_chegada;
  cin.ignore(1);
  cin >> minuto_chegada;
  hora_total = hora_chegada - hora_partida;
  minuto_total = minuto_chegada - minuto_partida;
  if (minuto_total < 0)
  {
    hora_total--;
    minuto_total += 60;
  }
  cout << "O tempo total de viagem foi " << hora_total << " horas e " << minuto_total << " min." << endl;
}
