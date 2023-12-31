/*
Escreva um programa que receba dois nomes pela linha de comando e exiba uma
mensagem.
*/

#include <iostream>

int main(int argc, char* argv[]) {
	if (argc != 3) {
		std::cout << "Please, only two paramters please.\n";
		return 1;
	}

	std::string arg01 = argv[1];
	std::string arg02 = argv[2];

	std::cout << "Hi, " << arg01 << " and " << arg02 << "! Welcome.\n";

	return 0;
}