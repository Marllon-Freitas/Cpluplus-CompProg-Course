/*
No programa abaixo, quais as vantagens de usar o tipo caractere para a variável
escolha e as constantes 'a', 'b', 'c', 'd' para os rótulos do switch, no lugar de
usar números para as escolhas do menu?

#include <iostream>
using namespace std;
int main()
{
  int escolha;
  cin >> escolha;
  while (escolha != 5)
  {
    switch (escolha)
    {
    case 1:
      cout << "Boa escolha\n.";
      break;
    case 2:
      cout << "Estou na dúvida\n.";
      break;
    case 3:
      cout << "Não sei o que dizer.\n";
      break;
    case 4:
      cout << "Quatro é um número\n.";
      break;
    default:
      cout << "Esta não é uma opção.\n";
    }
    cin >> escolha;
  }

  return 0;
}

Dica: pense no que aconteceria se o usuário digitasse 5 em cada caso e o que
aconteceria se o usuário digitasse 's' em cada caso.
*/

#include <iostream>
using namespace std;

int main()
{
  char escolha;
  cin >> escolha;
  while (escolha != 5)
  {
    switch (escolha)
    {
    case 'a':
      cout << "Boa escolha\n.";
      break;
    case 'b':
      cout << "Estou na dúvida\n.";
      break;
    case 'c':
      cout << "Não sei o que dizer.\n";
      break;
    case 'd':
      cout << "Quatro é um número\n.";
      break;
    default:
      cout << "Esta não é uma opção.\n";
    }
    cin >> escolha;
  }

  return 0;
}

/*
Usar o tipo caractere para a variável escolha e as constantes 'a', 'b', 'c', 'd'
para os rótulos do switch é vantajoso porque o caso o usuário digite um caractere
diferente de 'a', 'b', 'c', 'd', o programa informará que a opção não é válida.
E se o usuário digitar algum inteiro, ele verificará o valor desse inteiro como caractere
e informará que a opção não é válida.

Se o usuário digitar 5, o programa não entrará no loop e encerrará a execução.

Diferentemente do programa original, que não verifica se o usuário digitou um caractere
caso ele digite um caractere o programa entrará em um loop infinito.
*/
