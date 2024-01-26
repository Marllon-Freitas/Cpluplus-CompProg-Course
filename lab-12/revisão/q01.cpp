/*
Os números complexos são utilizados em várias áreas do conhecimento, tais como
engenharia, eletromagnetismo, física quântica, além da própria matemática. Um
número complexo é um número z que pode ser escrito na forma 𝑧 = 𝑥 + 𝑦𝑖, em
que x e y são números reais e i denota a unidade imaginária.
Construa um registro para representar números complexos e funções para ler,
exibir, calcular a soma e a multiplicação de números complexos.
Soma: (𝑎 + 𝑏𝑖) + (𝑐 + 𝑑𝑖) = (𝑎 + 𝑐) + (𝑏 + 𝑑)𝑖
Produto: (𝑎 + 𝑏𝑖)(𝑐 + 𝑑𝑖) = (𝑎𝑐 − 𝑏𝑑) + (𝑏𝑐 + 𝑎𝑑)𝑖
Construa um programa para testar as funções como no exemplo abaixo.

Primeiro complexo: 5+6i
Segundo complexo: 3-4i
A soma dos números: 8+2i
A multiplicação dos números: 39-2i

Dica: sempre mostra sinal +/- para valores decimais: os.setf(ios::showpos)

*/

#include <iostream>
using namespace std;

struct complexo
{
	float real;
	float imag;
};

complexo soma(complexo, complexo);
complexo multiplica(complexo, complexo);
complexo lerComplexo();
void exibe(complexo);

int main()
{
	complexo a, b, c, d;
	cout << "Primeiro complexo: ";
	a = lerComplexo();
	cout << "Segundo complexo: ";
	b = lerComplexo();
	c = soma(a, b);
	d = multiplica(a, b);
	cout << "A soma dos números: ";
	exibe(c);
	cout << "A multiplicação dos números: ";
	exibe(d);
	return 0;
}

complexo soma(complexo a, complexo b)
{
	complexo c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}

complexo multiplica(complexo a, complexo b)
{
	complexo c;
	c.real = a.real * b.real - a.imag * b.imag;
	c.imag = a.real * b.imag + a.imag * b.real;
	return c;
}

complexo lerComplexo()
{
	complexo a;
	cin >> a.real >> a.imag;
	return a;
}

void exibe(complexo a)
{
	cout << a.real;
	cout << showpos;
	cout << a.imag;
	cout << noshowpos;
	cout << "i" << endl;
}
