/*
Escreva uma função StrEqual que recebe duas strings e retorna um valor booleano
para indicar se elas são iguais. A função deve funcionar com o trecho de código
abaixo:

char palavra[20] = "colega";
if (StrEqual("colega", palavra))
 cout << "Iguais" << endl;
else
 cout << "Diferentes" << endl;

*/

#include <iostream>
using namespace std;

bool StrEqual(const char* s1, const char* s2);

int main()
{
	char palavra[20] = "colega";
	if (StrEqual("colega", palavra))
		cout << "Iguais" << endl;
	else
		cout << "Diferentes" << endl;
	return 0;
}

bool StrEqual(const char* s1, const char* s2)
{
	int tamanhoString1 = strlen(s1);
	int tamanhoString2 = strlen(s2);

	if (tamanhoString1 != tamanhoString2)
		return false;

	int i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	if (i == tamanhoString1)
		return true;
	else
		return false;
}