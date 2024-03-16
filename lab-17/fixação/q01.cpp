/*
Escreva um programa que utilize laços aninhados para produzir o padrão abaixo:

*
**
***
****
*****
****
***
**
*

*/

#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";		
		}
		cout << endl;
	}
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";		
		}
		cout << endl;
	}
}