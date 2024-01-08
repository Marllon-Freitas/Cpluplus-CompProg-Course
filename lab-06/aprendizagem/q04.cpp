/*
Altere o programa para que o resultado seja exibido corretamente tanto no cálculo
direto quanto no cálculo feito através da função. Explique o porquê dessa
diferença.

#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
  long long resultado = 200530 * 420800;
  cout << "Direto: " << resultado << endl;
  cout << "Função: " << calculo(200530, 420800) << endl;
  return 0;
}
  long long calculo(long long a, long long b)
{
  return a * b; 
}

*/

#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530LL, 420800LL) << endl;
	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
}
