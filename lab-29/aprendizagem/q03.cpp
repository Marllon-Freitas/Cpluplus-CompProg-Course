/*
A função print exibida abaixo funciona apenas para valores de tipos inteiros. Se
tentarmos chamá-la com valores ponto-flutuante, caractere ou string, teremos o
seguinte resultado:

#include <iostream>
#include <string>
using namespace std;
void print(int a, int b)
{
  int c = a + b;
  cout << a << " + " << b << " = " << c << endl;
}
int main()
{
  string strA = "Pro";
  string strB = "gramando";
  print(1, 2);
  print(2.6, 3.7);
  print('A', 'B');
  // print(strA, strB);
}

1 + 2 = 3
2 + 3 = 5
65 + 66 = 131
// erro

É possível corrigir todos esses problemas usando programação genérica com
templates. Transforme a função print em um template, de forma que ela trate
corretamente todos os tipos de dados do programa.
*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void print(T a, T b);

int main()
{
  string strA = "Pro";
  string strB = "gramando";
  print(1, 2);
  print(2.6, 3.7);
  print('A', 'B');
  print(strA, strB);
}

template <typename T>
void print(T a, T b)
{
  T c = a + b;
  cout << a << " + " << b << " = " << c << endl;
}
