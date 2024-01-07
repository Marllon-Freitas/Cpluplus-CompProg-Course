/*
Corrija o programa abaixo mantendo a constante simbólica ZERO.

include iostream
namespace using std
void main{}
(
 Int total;
 Cout << "Inicialmente total = " << Total << " (ZERO)\n";
 Total = 50;
 cout << "Depois da atribuição total = " << total << endl;
 Return ZERO;
)

De forma que a saída seja:
Inicialmente total = 0 (ZERO)
Depois da "atribuição" total = 50
*/

#include <iostream>
using namespace std;
#define ZERO 0

int main()
{
	int total = ZERO;
	cout << "Inicialmente total = " << total << " (ZERO)\n";
	total = 50;
	cout << "Depois da atribuição total = " << total << endl;
	return ZERO;
}
