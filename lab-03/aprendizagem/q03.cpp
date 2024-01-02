/*
A energia gasta em calorias com uma atividade aeróbica qualquer obedece à
equação: E = METS × PESO × (Tempo de Atividade / 60). O tempo é dado em
minutos. O peso é dado em quilos. METS significa capacidade aeróbica e depende
do tipo de exercício. Ciclismo ou corrida leve tem pontuação METS = 7.0. A Natação
tem pontuação METS = 8.0.
Um usuário deve entrar com seu peso, quanto tempo ele corre por semana, quanto
tempo ele pedala por semana e quanto tempo ele nada por semana. O seu
programa deve retornar o número de calorias que este usuário queima por semana
com exercícios físicos.

Digite seu peso em quilos: 75
Digite o tempo de corrida: 2h30m
Digite o tempo de ciclismo: 1h00m
Digite o tempo de natação: 1h20m
Você gastou um total de 2637.5 calorias.
*/

#include <iostream>
using namespace std;

int main()
{
  float peso, calorias;
  int horasCorrida, minutosCorrida, horasCiclismo, minutosCiclismo, horasNatacao, minutosNatacao;
  char lixoHoras, lixoMinutos;
  cout << "Digite seu peso em quilos: ";
  cin >> peso;
  cout << "Digite o tempo de corrida: ";
  cin >> horasCorrida >> lixoHoras >> minutosCorrida >> lixoMinutos;
  cout << "Digite o tempo de ciclismo: ";
  cin >> horasCiclismo >> lixoHoras >> minutosCiclismo >> lixoMinutos;
  cout << "Digite o tempo de natação: ";
  cin >> horasNatacao >> lixoHoras >> minutosNatacao >> lixoMinutos;
  cout << "console.log" << (horasCorrida * 60) + minutosCorrida << endl;
  calorias = 7.0 * peso * ((horasCorrida * 60) + minutosCorrida) / 60.0;
  calorias += 7.0 * peso * ((horasCiclismo * 60) + minutosCiclismo) / 60.0;
  calorias += 8.0 * peso * ((horasNatacao * 60) + minutosNatacao) / 60.0;
  cout << "Você gastou um total de " << calorias << " calorias." << endl;
  return 0;
}