/*
Resolva a questão anterior utilizando if’s aninhados no lugar do operador &&.
*/

#include <iostream>
using namespace std;

int main()
{
  const int CH = 60;
  unsigned numFaltas = 10;
  float mediaFinal = 7.0, n4 = 6.0;

  // a. Quando o aluno está aprovado
  if (mediaFinal >= 7.0)
  {
    if (numFaltas <= CH * 0.25)
    {
      cout << "a. Quando o aluno está aprovado" << endl;
    }
    else
    {
      cout << "b. Quando o aluno está reprovado" << endl;
    }
  }
  // b. Quando o aluno está reprovado
  else
  {
    cout << "b. Quando o aluno está reprovado" << endl;
  }

  return 0;
}