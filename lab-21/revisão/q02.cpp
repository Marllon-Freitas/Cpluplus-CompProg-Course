/*
Em C++ qual é o resultado de negar duas vezes uma expressão?
Isto é, !!x é sempre igual a x?
*/

#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  cout << "!!x = " << !!x << endl;
  return 0;
}

/*
Resposta:
Se x for diferente de zero ou 1, nunca voltara ao valor original.
Já que a negação de um número diferente de zero é zero e a negação de zero é 1.
Saída:
!!x = 1
obs: A saída será sempre 1, pois x é diferente de zero.
*/