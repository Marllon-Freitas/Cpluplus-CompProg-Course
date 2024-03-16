/*
O fragmento de código abaixo é válido? Se sim, o que ele vai mostrar na tela?
cout << boolalpha;
cout << (cin >> x, x > 0) << endl;
*/

#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << boolalpha;
  cout << (cin >> x, x > 0) << endl;
  return 0;
}

// O código acima é válido e irá exibir: true Se o valor de x for maior que 0, ou false Se o valor de x for menor ou igual a 0
