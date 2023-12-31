/*
acentuacao em c++
*/

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1252 > nul"); // <-------
	cout << "Acentuação é possível?" << endl;
	char palavra[40];
	cin >> palavra;
	cout << palavra << endl;
}

