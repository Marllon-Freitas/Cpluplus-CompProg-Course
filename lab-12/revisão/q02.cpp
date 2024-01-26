/*
Altere o programa da questão anterior para que a leitura/escrita de um complexo
seja feita com cin/cout e a soma e multiplicação com os operadores de + e *, como
mostrado no exemplo abaixo:

int main()
{
  cout << "Digite o primeiro número complexo: ";
  Complexo a;
  cin >> a;
  cout << "Digite um segundo número complexo: ";
  Complexo b;
  cin >> b;
  cout << "A soma dos números: " << a + b << endl;
  cout << "A multiplicação dos números: " << a * b << endl;
}

*/

#include <iostream>
using namespace std;

struct complexo
{
	float real;
	float imag;
};

complexo operator+(complexo, complexo);
complexo operator*(complexo, complexo);
ostream& operator<<(ostream&, complexo&);
istream& operator>>(istream&, complexo&);

int main()
{
	complexo a, b, c, d;
	cout << "Primeiro complexo: ";
	cin >> a;
	cout << "Segundo complexo: ";
	cin >> b;
	c = a + b;
	d = a * b;
	cout << "A soma dos números: ";
	cout << c;
	cout << "A multiplicação dos números: ";
	cout << d;
	return 0;
}

complexo operator+(complexo a, complexo b)
{
	complexo c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}

complexo operator*(complexo a, complexo b)
{
	complexo c;
	c.real = a.real * b.real - a.imag * b.imag;
	c.imag = a.real * b.imag + a.imag * b.real;
	return c;
}

istream& operator>>(istream& is, complexo& a)
{
	is >> a.real >> a.imag;
	cin.ignore();
	return is;
}

ostream& operator<<(ostream& os, complexo& a)
{
	os << a.real;
	os << showpos;
	os << a.imag;
	os << noshowpos;
	os << "i" << endl;
	return os;
}
