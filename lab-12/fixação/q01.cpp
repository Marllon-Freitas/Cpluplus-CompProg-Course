/*
O registro chocolate contém três membros:
• O primeiro guarda a marca da barra de chocolate
• O segundo membro guarda o peso da barra (possui uma parte fracionária)
• O terceiro membro guarda o número de calorias (um valor inteiro)
Escreva um programa que declare tal registro e crie uma variável chamada
lanche, inicializando seus membros para “Charge”, 2.3, e 350, respectivamente. A
inicialização deve ser parte da declaração da variável. Finalmente, o programa
deve mostrar o conteúdo da variável lanche.

*/

#include <iostream>

using namespace std;

struct chocolate
{
	char marca[20];
	float peso;
	int calorias;
};

int main()
{
	chocolate lanche = { "Charge", 2.3, 350 };

	cout << "Marca: " << lanche.marca << endl;
	cout << "Peso: " << lanche.peso << endl;
	cout << "Calorias: " << lanche.calorias << endl;

	return 0;
}
