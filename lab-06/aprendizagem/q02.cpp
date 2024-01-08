/*
Utilize a diretiva #define para criar constantes simbólicas para o preço de um pão
(R$0,30) e para o preço de um pastel (R$0,25). Na função principal, peça para o
usuário informar quantos pães e quantos pasteis ele quer. Utilize as constantes
simbólicas que representam os preços dos produtos para fazer o cálculo de quanto
o usuário vai pagar, e mostre o resultado na tela.

Pães&Cia
Quantos pães? 5
Quantos pastéis? 4
O total das compras é R$2.50

*/

#include <iostream>
#include <iomanip>
using namespace std;

#define PRECO_PAO 0.30
#define PRECO_PASTEL 0.25

int main()
{
	float qtd_pao, qtd_pastel, total_compras;
	cout << fixed << setprecision(2);
	cout << "Pães&Cia" << endl;
	cout << "Quantos pães? ";
	cin >> qtd_pao;
	cout << "Quantos pastéis? ";
	cin >> qtd_pastel;
	total_compras = (qtd_pao * PRECO_PAO) + (qtd_pastel * PRECO_PASTEL);
	cout << "O total das compras é R$ " << total_compras << endl;
}
