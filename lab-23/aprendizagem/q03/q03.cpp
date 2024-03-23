/*
Uma escola deseja fazer uma competição intercalasses com seus alunos. A
secretaria da escola montou um arquivo texto com a lista dos alunos interessados
em participar da competição. A listagem contém o nome do aluno e um código que
indica o turno (manhã ou tarde) e a série (6ª, 7ª ou 8ª), como no exemplo abaixo:

Anita Torcato M8
Bárbara Borja T6
Estevan Prado T7
Eudes Salvado M6
Geovana Castro M7
Pedro Vieira T7
Marcela Arantes M6
Vânia Horta T8
Óscar Neiva M7
Amélia Reino M8
Cláudio Reine T6
Fábia Candeias T8

Crie um registro para representar um aluno, leia as informações do arquivo e
guarde em um vetor de alunos. Em seguida use laços e testes condicionais para
separar e exibir os alunos agrupados por turno e série, como no exemplo abaixo.

Matutino 6a Série
-----------------
Eudes Salvado M6
Marcela Arantes M6
Matutino 7a Série
-----------------
Geovana Castro M7
Óscar Neiva M7
Matutino 8a Série
-----------------
Anita Torcato M8
Amélia Reino M8
Vespertino 6a Série
-------------------
Bárbara Borja T6
Cláudio Reine T6
Vespertino 7a Série
-------------------
Estevam Prado T7
Pedro Vieira T7
Vespertino 8a Série
-------------------
Vânia Horta T8
Fábia Candeias T8

Sugestão: tente também listar os alunos separados apenas por turno.
a. Seria possível separar os alunos por sexo usando os dados fornecidos no
programa? Descreva sua solução.
b. Se fosse possível adicionar novas informações aos dados, qual seria a
forma mais fácil de conseguir fazer essa separação por sexo?
*/

#include <iostream>
#include <fstream>
using namespace std;

struct aluno
{
  char nome[50];
  char sobrenome[50];
  char turno;
  int serie;
};

int main()
{
  ifstream fin("listaAlunos.txt");

  if (!fin.is_open())
  {
    cout << "Abertura do arquivo listaAlunos.txt falhou.\n";
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  aluno alunos[100];
  int n = 0;
  char line[100];

  while (fin.getline(line, 100))
  {
    int i = 0, j = 0;
    while (line[i] != ' ')
    {
      alunos[n].nome[j++] = line[i++];
    }
    alunos[n].nome[j] = '\0';
    i++; // Skip space
    j = 0;
    while (line[i] != ' ')
    {
      alunos[n].sobrenome[j++] = line[i++];
    }
    alunos[n].sobrenome[j] = '\0';
    while (line[i] == ' ')
      i++; // Skip spaces
    alunos[n].turno = line[i++];
    while (line[i] == ' ')
      i++; // Skip spaces
    alunos[n].serie = line[i++] - '0';
    n++;
  }

  fin.close();

  char turnos[] = {'M', 'T'};
  int series[] = {6, 7, 8};

  // Listar alunos por turno e série
  for (int t = 0; t < 2; t++)
  {
    for (int s = 0; s < 3; s++)
    {
      cout << (turnos[t] == 'M' ? "Matutino " : "Vespertino ") << series[s] << "a Serie\n";
      cout << "-----------------\n";
      for (int i = 0; i < n; i++)
      {
        if (alunos[i].turno == turnos[t] && alunos[i].serie == series[s])
        {
          cout << alunos[i].nome << " " << alunos[i].turno << alunos[i].serie << "\n";
        }
      }
      cout << "\n";
    }
  }

  // Listar alunos apenas por turno
  for (int t = 0; t < 2; t++)
  {
    cout << (turnos[t] == 'M' ? "Matutino\n" : "Vespertino\n");
    cout << "-----------------\n";
    for (int i = 0; i < n; i++)
    {
      if (alunos[i].turno == turnos[t])
      {
        cout << alunos[i].nome << " " << alunos[i].turno << alunos[i].serie << "\n";
      }
    }
    cout << "\n";
  }

  return 0;
}

/*
a. Seria possível separar os alunos por sexo usando os dados fornecidos no
programa? Descreva sua solução.
De maniera confiável, não, pois não há informações sobre o sexo dos alunos no
arquivo. Poderíamos tentar inferir o sexo a partir do nome, mas isso não seria
confiável, pois há nomes que podem ser de homens ou mulheres.

b. Se fosse possível adicionar novas informações aos dados, qual seria a
forma mais fácil de conseguir fazer essa separação por sexo?
Adicionando um campo sexo ao registro aluno e lendo essa informação do arquivo.
*/