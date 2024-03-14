/*
Construa um registro para guardar informações sobre um carro. Um carro deve
ter um modelo, ano de fabricação e preço. Em seguida construa um vetor estático
de 10 carros inicializando os dois primeiros carros respectivamente para "Vectra",
2009, R$58.000,00 e "Polo", 2008, R$45.000,00. Use um ponteiro para apontar
para o segundo carro e exibir seus dados.

*/

#include <iostream>
using namespace std;

struct Carro
{
	char modelo[20];
	char anoDeFabricacao[5];
	float preco;
};

int main()
{
	Carro vetorEstaticoDeCarros[10] =
	{
		{"Vectra", "2009", 58000},
		{"Polo", "2008", 45000}
	};

	Carro* pt = &vetorEstaticoDeCarros[1];

	cout << pt->modelo << " " << pt->anoDeFabricacao << " " << pt->preco << endl;

	return 0;
}