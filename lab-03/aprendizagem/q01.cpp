/*
Construa um programa para calcular a quantidade de dinheiro gasto por um
fumante. O programa deve ler o número de anos que o usuário fuma, o número de
cigarros fumados por dia e o preço de uma carteira com 20 cigarros. A saída deve
ser semelhante ao exemplo abaixo.
A quantos anos você fuma? 10
Quantos cigarros você fuma por dia? 5
Qual o preço médio de uma carteira de cigarros? 6.50
Você gastou até agora R$5931.25 com cigarros.
*/

#include <iostream>
using namespace std;

int main()
{
	int anos, cigarros;
	float preco;
	cout << "A quantos anos você fuma? ";
	cin >> anos;
	cout << "Quantos cigarros você fuma por dia? ";
	cin >> cigarros;
	cout << "Qual o preço médio de uma carteira de cigarros? ";
	cin >> preco;
	cout << "Você gastou até agora R$" << anos * 365 * cigarros * preco / 20 << " com cigarros." << endl;
	return 0;
}