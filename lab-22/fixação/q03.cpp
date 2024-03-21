/*
Em uma empresa, um funcionário pode ser conhecido pelo seu nome, seu cargo ou
seu apelido. Escreva um programa que possa listar funcionários por nome, cargo,
apelido ou pela preferência do funcionário. Utilize o registro abaixo como base:

struct bop {
 char nome[50]; // nome do funcionário
 char cargo[50]; // cargo que ocupa na empresa
 char apelido[50]; // apelido do funcionário
 int pref; // 0 = nome, 1 = cargo, 2 = apelido
}

No programa crie um pequeno vetor desses registros e inicialize-o para valores de
sua escolha. Faça o programa rodar um laço que possibilite o usuário selecionar
uma das alternativas:

a. Mostrar por nome
b. Mostrar por cargo
c. Mostrar por apelido
d. Mostrar por preferência
e. Sair

Observe que “Mostrar por preferência” não significa mostrar o campo pref do
registro; significa mostrar o campo correspondente ao número armazenado em
pref. Por exemplo, se a preferência de João é 1 e de José é 2, então escolhendo a
opção d, exibiria o cargo de João e o apelido de José. O programa deve rodar
semelhante ao exemplo abaixo:

Listagem de Funcionários
a. Mostrar por nome
b. Mostrar por cargo
c. Mostrar por apelido
d. Mostrar por preferência
e. Sair
Digite sua opção: a
José
Marcos
João
Carlos
Digite sua opção: d
Paquito
Porteiro
Segurança
Carlos
Digite sua opção: e
Tchau!
*/

#include <iostream>
using namespace std;

struct bop
{
  char nome[50];    // nome do funcionário
  char cargo[50];   // cargo que ocupa na empresa
  char apelido[50]; // apelido do funcionário
  int pref;         // 0 = nome, 1 = cargo, 2 = apelido
};

int main()
{
  bop funcionarios[4] = {
      {"José", "Segurança", "Paquito", 0},
      {"Marcos", "Porteiro", "Portuga", 1},
      {"João", "Segurança", "Zé", 2},
      {"Carlos", "Porteiro", "Carlinhos", 0}};

  char opcao;
  cout << "Listagem de Funcionários" << endl;
  cout << "a. Mostrar por nome" << endl;
  cout << "b. Mostrar por cargo" << endl;
  cout << "c. Mostrar por apelido" << endl;
  cout << "d. Mostrar por preferência" << endl;
  cout << "e. Sair" << endl;
  cout << "Digite sua opção: ";
  cin >> opcao;
  while (opcao != 'e')
  {
    switch (opcao)
    {
    case 'a':
      for (int i = 0; i < 4; i++)
      {
        cout << funcionarios[i].nome << endl;
      }
      break;
    case 'b':
      for (int i = 0; i < 4; i++)
      {
        cout << funcionarios[i].cargo << endl;
      }
      break;
    case 'c':
      for (int i = 0; i < 4; i++)
      {
        cout << funcionarios[i].apelido << endl;
      }
      break;
    case 'd':
      for (int i = 0; i < 4; i++)
      {
        switch (funcionarios[i].pref)
        {
        case 0:
          cout << funcionarios[i].nome << endl;
          break;
        case 1:
          cout << funcionarios[i].cargo << endl;
          break;
        case 2:
          cout << funcionarios[i].apelido << endl;
          break;
        }
      }
      break;
    }
    cout << "Digite sua opção: ";
    cin >> opcao;
  }
  cout << "Tchau!" << endl;
  return 0;
}