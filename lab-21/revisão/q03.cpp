/*
Dadas uma constante CH indicando a carga horária de uma disciplina (ex.: 60H), a
média final (MF), a nota da 4ª avaliação (N4) e o número de faltas (F) de um aluno,
construa uma expressão lógica para dizer:

a. Quando o aluno está aprovado
b. Quando o aluno está reprovado.

Considere que o aluno é aprovado se a média final for maior ou igual a 7.0 e o número
de faltas for menor ou igual a 25% da carga horária da disciplina.
*/

#include <iostream>
using namespace std;

int main()
{
  const int CH = 60;
  unsigned numFaltas = 10;
  float mediaFinal = 7.0, n4 = 6.0;

  // a. Quando o aluno está aprovado
  if (mediaFinal >= 7.0 && numFaltas <= CH * 0.25)
  {
    cout << "a. Quando o aluno está aprovado" << endl;
  }

  // b. Quando o aluno está reprovado
  else
  {
    cout << "b. Quando o aluno está reprovado" << endl;
  }

  return 0;
}