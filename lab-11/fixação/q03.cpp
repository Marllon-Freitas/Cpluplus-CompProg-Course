/*
Descubra o que acontece quando tentamos exibir um vetor de caracteres que não é
uma string. Para isso inicialize dois vetores, um sendo uma string e outro sendo
apenas um vetor de caracteres. Exiba ambos com cout.

*/

#include <iostream>
using namespace std;

int main()
{
	char vetorCrt[] = { 'v','e','t','o','r' }, stringCrt[] = { 's','t','r','i','n','g','\0' };

	cout << vetorCrt << endl;
	cout << stringCrt << endl;

	return 0;
}
