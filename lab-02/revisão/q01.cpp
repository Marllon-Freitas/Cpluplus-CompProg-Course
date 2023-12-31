/*
Crie um programa que exiba as informações abaixo usando apenas um cout. 
Faça uma versão que utilize apenas endl para saltar linhas. 
Faça outra * versão que utilize apenas \n para saltar linhas.
----------------------------------
Bem-vindo
ao mundo
do C++
----------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "With \\n" << endl;
	cout << "Welcome\nto the world\nof C++!\n";

	cout << "With endl" << endl;
	cout << "Welcome" << endl << "to the world" << endl << "of C++!" << endl;

	return 0;
}