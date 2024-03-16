/*
Use um laço for para exibir uma string armazenada em um vetor de caracteres.
Faça uma versão que use uma comparação no teste do laço e outra versão sem
usar comparação.

*/

#include <iostream>
using namespace std;

int main()
{
	char str[] = "Bom dia";
	for (int i = 0; str[i] != '\0'; i++)
	{
		cout << str[i];
	}
	cout << endl;

	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
	}
	cout << endl;
	return 0;
}