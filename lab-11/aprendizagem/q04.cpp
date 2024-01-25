/*
Peça ao usuário que digite o nome de 3 datas comemorativas. Concatene as 3
strings em um único vetor de caracteres formando uma frase, como mostrado no
exemplo. Defina mais um vetor de caracteres com a palavra "Natal" e compare-o
com o que foi digitado pelo usuário. Se alguma das strings digitadas for "Natal",
mostre a mensagem "O Natal também é uma das minhas datas preferidas!".

Quais suas datas comemorativas preferidas?
Carnaval
Natal
Ano Novo
Carnaval, Natal e Ano Novo são belas festas.
O Natal também é uma das minhas datas preferidas!

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char data1[100], data2[100], data3[100], frase[100], natal[100] = "Natal";

	cout << "Quais suas datas comemorativas preferidas?" << endl;
	cout << "Data 1: ";
	cin.getline(data1, 100);

	cout << "Data 2: ";
	cin.getline(data2, 100);

	cout << "Data 3: ";
	cin.getline(data3, 100);

	strcpy(frase, data1);
	strcat(frase, ", ");
	strcat(frase, data2);
	strcat(frase, " e ");
	strcat(frase, data3);
	strcat(frase, " são belas festas.");

	cout << frase << endl;

	if (strcmp(data1, natal) == 0 || strcmp(data2, natal) == 0 || strcmp(data3, natal) == 0)
		cout << "O Natal também é uma das minhas datas preferidas!" << endl;

	return 0;
}
