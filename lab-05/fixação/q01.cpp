/*
Escreva um programa que peça ao usuário para entrar com um valor para hora e
outro valor para minuto. A função main() deve então passar estes dois valores
para uma função que mostra os valores na tela no formato hh:mm.

Entre com o número de horas: 9
Entre com o número de minutos: 45
Agora são 9:45

*/

#include <iostream>
using namespace std;

void mostraHora(int hora, int minuto);

int main()
{
  int hora, minuto;
  cout << "Entre com o número de horas: ";
  cin >> hora;
  cout << "Entre com o número de minutos: ";
  cin >> minuto;
  mostraHora(hora, minuto);
}

void mostraHora(int hora, int minuto)
{
  cout << hora << ":" << minuto << endl;
}