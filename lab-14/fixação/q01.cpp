/*
Modifique o programa abaixo para que ele mostre o número 10 na tela usando o
ponteiro q:

#include <iostream>
using namespace std;
int main()
{
 int x, * p, ** q;
 p = &x;
 q = &p;
 x = 10;
 cout << q << endl; // não está mostrando o número 10
}

*/

#include <iostream>
using namespace std;

int main()
{
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    cout << **q << endl;
}
