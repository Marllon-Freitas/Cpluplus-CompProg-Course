/*
Construa uma função exibirBits que, dado um valor unsigned char, exibe na tela a
representação binária desse número. A função exibirBits deve usar a função
testarBit (do exercício de fixação 5) para descobrir quais bits do valor recebido são
iguais 0 e quais são iguais a 1.

Digite um valor entre 0 e 255: 143
O número 143 em binário é 10001111.

*/

/*
Construa uma função exibirBits que, dado um valor unsigned char, exibe na tela a
representação binária desse número. A função exibirBits deve usar a função
testarBit (do exercício de fixação 5) para descobrir quais bits do valor recebido são
iguais 0 e quais são iguais a 1.

Digite um valor entre 0 e 255: 143
O número 143 em binário é 10001111.

*/

#include <iostream>
using namespace std;

void exibirBits(unsigned char);
bool testarBit(unsigned char, int);

int main()
{
  unsigned char c;
  int valor;
  cout << "Digite um valor entre 0 e 255: ";
  cin >> valor;
  c = (unsigned char)valor;
  cout << "O número " << valor << " em binário é ";
  exibirBits(c);
  return 0;
}

void exibirBits(unsigned char c)
{
  for (int i = 7; i >= 0; i--)
    cout << (testarBit(c, i) ? '1' : '0');
  cout << endl;
}

bool testarBit(unsigned char c, int pos)
{
  return c & (1 << pos);
}
