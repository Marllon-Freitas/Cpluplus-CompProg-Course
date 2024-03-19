/*
Escreva um programa que leia as três notas de um aluno e a quantidade de faltas
que ele obteve na disciplina e responda se ele está aprovado, em 4ª prova ou
reprovado. Se o aluno estiver em 4ª prova, leia sua nota final e responda
dizendo se ele está aprovado ou reprovado. O aluno tem que estar presente a 75%
das aulas para não ser reprovado por falta. Considere o número de aulas um valor
constante e igual a 66.

Digite as notas e frequência da disciplina
Nota 1: 2.5
Nota 2: 4.0
Nota 3: 3.8
Faltas: 10
4ª Prova
Digite sua 4ª nota: 5.5
Reprovado
*/

#include <iostream>
using namespace std;

int main()
{
  const int QTD_AULAS = 66;
  const float LIMITE_FALTAS = 0.75 * QTD_AULAS;
  const float MEDIA_APROVACAO = 7.0;

  float n1, n2, n3, n4, media;
  int qtdFaltas;

  cout << "Digite as notas e frequência da disciplina" << endl;

  cout << "Nota 1: ";
  cin >> n1;

  cout << "Nota 2: ";
  cin >> n2;

  cout << "Nota 3: ";
  cin >> n3;

  cout << "Faltas: ";
  cin >> qtdFaltas;

  media = (n1 + n2 + n3) / 3.0;

  if (qtdFaltas > LIMITE_FALTAS)
  {
    cout << "Reprovado" << endl;
  }
  else if (media < MEDIA_APROVACAO)
  {
    cout << "4ª Prova " << endl;
    cout << "Digite sua 4ª nota: ";
    cin >> n4;
    media = (n1 + n2 + n3 + n4) / 4.0;

    if (media < MEDIA_APROVACAO)
    {
      cout << "Reprovado" << endl;
    }
    else
    {
      cout << "Aprovado" << endl;
    }
  }
  else
  {
    cout << "Aprovado" << endl;
  }

  return 0;
}
