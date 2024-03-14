/*
As instruções abaixo resultam em um código válido? Explique o porquê.
*/

#include <iostream>
using namespace std;

int main()
{
  float peso;
  peso = 30;
  cout << peso;
  //(erro aqui)-> delete peso;
}

/*
Não, pois a variável peso não foi alocada dinamicamente, logo não é possível desalocá-la.
Só pode ter delete se tiver new.
*/