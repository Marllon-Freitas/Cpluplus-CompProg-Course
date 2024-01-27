/*
Crie uma função para ler, exibir e subtrair elementos do tipo horário, definidos
como na questão anterior. Peça ao usuário para entrar com o horário de início e
fim da sua aula de programação. Exiba quantos minutos de aula existem entre os
dois horários, como no exemplo abaixo:

Início: 13:55
Fim: 15:45
Entre 13:55 e 15:45 existem 110 minutos, isto é, 1h e 50 minutos.

Sugestão: faça uma versão com funções normais e depois faça outra versão que
utiliza os operadores para cin, cout e subtração no lugar das funções.

*/

#include <iostream>
using namespace std;

struct horario
{
  int hora;
  int minuto;
};

void exibirHorario(horario);
horario lerHorario();
horario subtrairHorario(horario, horario);

int main()
{
  horario inicio, fim, diferenca;

  cout << "Digite o horario de inicio: ";
  inicio = lerHorario();

  cout << "Digite o horario de fim: ";
  fim = lerHorario();

  diferenca = subtrairHorario(fim, inicio);

  cout << "Entre " << (inicio.hora < 10 ? "0" : "") << inicio.hora << ":" << (inicio.minuto < 10 ? "0" : "") << inicio.minuto << " e " << (fim.hora < 10 ? "0" : "") << fim.hora << ":" << (fim.minuto < 10 ? "0" : "") << fim.minuto << " existem " << diferenca.hora * 60 + diferenca.minuto << " minutos, isto é, " << diferenca.hora << "h e " << diferenca.minuto << " minutos." << endl;

  return 0;
}

horario subtrairHorario(horario fim, horario inicio)
{
  horario diferenca;

  diferenca.hora = fim.hora - inicio.hora;
  diferenca.minuto = fim.minuto - inicio.minuto;

  if (diferenca.hora <= 0)
  {
    diferenca.hora += 24;
  }

  if (diferenca.minuto < 0)
  {
    diferenca.minuto += 60;
    diferenca.hora--;
  }

  return diferenca;
}

horario lerHorario()
{
  horario horarioLido;
  char doisPontos;

  cin >> horarioLido.hora >> doisPontos >> horarioLido.minuto;

  return horarioLido;
}

void exibirHorario(horario horarioExibido)
{
  cout << (horarioExibido.hora < 10 ? "0" : "") << horarioExibido.hora << ":" << (horarioExibido.minuto < 10 ? "0" : "") << horarioExibido.minuto << endl;
}
