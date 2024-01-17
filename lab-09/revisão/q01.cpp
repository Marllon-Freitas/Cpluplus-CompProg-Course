// Analise o programa abaixo:

#include <iostream>
using namespace std;
int main()
{
  long a = 2009032809;
  float b = a;
  double c = a;
  cout << "valor long: " << a << endl;
  cout << endl;
  cout << "Mostrando em formato científico:" << endl;
  cout << "valor float: " << b << endl;
  cout << "valor double: " << c << endl;
  cout << endl;
  cout << "Mostrando no formato decimal:" << endl;
  cout << fixed;
  cout.precision(0);
  cout << "valor float: " << b << endl;
  cout << "valor double: " << c << endl;
  return 0;
}

// Por que os valores são iguais em formato científico, mas diferentes em formato decimal?

/*
A diferença ocorre porque o tipo float possui 6 dígitos significativos, enquanto o tipo double possui 15 dígitos significativos.
Em exibições em formato científico, o número de dígitos significativos(8) é o mesmo para ambos os tipos. Já em exibições em formato decimal, o número de dígitos significativos é diferente.
*/


