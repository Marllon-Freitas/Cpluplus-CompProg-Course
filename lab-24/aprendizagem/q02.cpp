/*
Crie um registro Soldado com os campos nome, eliminações, mortes, taxa de
eliminações por morte (eliminações/mortes) e número de partidas jogadas. Na
função principal leia um soldado de um arquivo binário. Se o arquivo não
existir, você deve direcionar o usuário para a criação um novo soldado. Quando
o soldado for lido (seja pelo arquivo ou pelo teclado), você deve dar as
seguintes opções ao usuário:

[N]ovo soldado (sobrescreve o anterior)
[A]tualiza soldado (com os dados da última partida)
[E]xibe soldado (atual)
[S]air

Novo: deve pedir as informações de um soldado, armazená-las em memória
durante a execução do programa ao final do programa gravá-las em um
arquivo binário.

Atualiza: o usuário deve digitar as informações referentes a última partida do
jogo (número de eliminações e mortes), e o programa deve atualizar as
informações do soldado contabilizando as informações dessa partida.

Exibe: crie uma função que receba um Soldado e mostre as informações dele
na tela. Chame a função passando o soldado atual sempre que essa opção for
selecionada.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct soldado
{
  char nome[50];
  int eliminacoes;
  int mortes;
  float taxa;
  int partidas;
};

int main()
{
  soldado s;
  char opcao;
  ifstream arquivo("soldado.bin", ios::binary);
  if (arquivo.is_open())
  {
    arquivo.read((char *)&s, sizeof(s));
    arquivo.close();
  }
  else
  {
    cout << "Soldado não encontrado. Criando novo soldado." << endl;
    cout << "Digite o nome do soldado: ";
    cin.getline(s.nome, 50);
    s.eliminacoes = 0;
    s.mortes = 0;
    s.taxa = 0;
    s.partidas = 0;
  }

  do
  {
    cout << "Escolha uma opção:" << endl;
    cout << "[N]ovo soldado" << endl;
    cout << "[A]tualiza soldado" << endl;
    cout << "[E]xibe soldado" << endl;
    cout << "[S]air\n"
         << endl;
    cin >> opcao;
    cin.ignore();
    switch (opcao)
    {
    case 'N':
    case 'n':
      cout << "Digite o nome do soldado: ";
      cin.getline(s.nome, 50);
      s.eliminacoes = 0;
      s.mortes = 0;
      s.taxa = 0;
      s.partidas = 0;
      cout << endl;
      break;
    case 'A':
    case 'a':
      int eliminacoes, mortes;
      cout << "Digite o número de eliminações: ";
      cin >> eliminacoes;
      cout << "Digite o número de mortes: \n";
      cin >> mortes;
      s.eliminacoes += eliminacoes;
      s.mortes += mortes;
      if (s.mortes != 0)
        s.taxa = (float)(s.eliminacoes / s.mortes);
      else
        s.taxa = 0;
      s.partidas++;
      cout << endl;
      break;
    case 'E':
    case 'e':
      cout << "Nome: " << s.nome << endl;
      cout << "Eliminações: " << s.eliminacoes << endl;
      cout << "Mortes: " << s.mortes << endl;
      cout.precision(2);
      cout << fixed;
      cout << "Taxa de Eliminações: " << s.taxa << endl;
      cout << "Partidas: " << s.partidas << endl;
      cout << endl;
      break;
    }
  } while (opcao != 'S' && opcao != 's');

  ofstream saida("soldado.bin", ios::binary);
  saida.write((char *)&s, sizeof(s));
  saida.close();

  return 0;
}