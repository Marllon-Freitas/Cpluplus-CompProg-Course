/*
. As funções rand() e srand() da biblioteca <cstdlib> funcionam em conjunto
para gerar números pseudoaleatórios. Enquanto rand gera um número
pseudoaleatório entre 0 e 32767, srand gera uma nova semente para rand. A
semente é o valor inicial usado pelo gerador para criar os números. Para uma dada
semente, a sequência de números gerados por rand é sempre a mesma.
Para entender melhor o funcionamento dessas funções, crie um programa que use
srand(1), e em seguida exiba o resultado a cinco chamadas da função rand().
Execute o programa várias vezes. O resultado é sempre o mesmo?

Resposta: Sim, o resultado é sempre o mesmo.

Gerando números pseudoaleatórios:
41 18467 6334 26500 19169
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  srand(1);
  cout << "Gerando números pseudoaleatórios:" << endl;
  cout << rand() << " ";
  cout << rand() << " ";
  cout << rand() << " ";
  cout << rand() << " ";
  cout << rand() << endl;
  return 0;
}

/*
Agora mude o valor passado a srand() e tente executar novamente o programa. O
resultado obtido foi diferente? Execute o programa várias vezes.

Resposta: Sim, o resultado foi diferente.
*/