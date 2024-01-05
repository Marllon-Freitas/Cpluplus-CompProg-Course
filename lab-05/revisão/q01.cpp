/*
Existem muitas formas de escrever um programa com funções. Uma dúvida
comum é o que colocar na função e o que deixar no programa principal. Veja, por
exemplo, duas soluções diferentes para um mesmo programa.
// versão 1
#include <iostream>
using namespace std;
void alarme();
int lerSenha();
int main()
{
 cout << "Iniciando...\n";
 alarme();
 cout << "Senha: ";
 int senha = lerSenha();
}
void alarme()
{
 cout << '\a';
}
int lerSenha()
{
 int n;
 cin >> n;
 return n;
}

// versão 2
#include <iostream>
using namespace std;
void alarme();
void lerSenha();
int main()
{
 alarme();
 lerSenha();
}
void alarme()
{
 cout << "Iniciando...\n";
 cout << '\a';
}
void lerSenha()
{
 cout << "Senha: ";
 int senha;
 cin >> senha;
}

As duas versões geram o mesmo resultado para o usuário. Porém, as funções da 1ª
versão estão orientadas a tarefas enquanto as funções da 2ª versão estão
orientadas a blocos. As duas formas são úteis e tem suas aplicações.
Mas imagine que, após a leitura da senha, fosse necessário mostrar a mensagem
“Finalizando…” e emitir outra vez o alarme. Como isso poderia ser feito em cada
versão?
*/

// versão 01 
#include <iostream>
using namespace std;

void alarme();
int lerSenha();

int main()
{
	cout << "Iniciando...\n";
	alarme();
	cout << "Senha: ";
	int senha = lerSenha();
	cout << "Finalizando...\n";
	alarme();
}

void alarme()
{
	cout << '\a';
}

int lerSenha()
{
	int n;
	cin >> n;
	return n;
}

// versão 02 ------------
// #include <iostream>
// using namespace std;

// void alarme();
// void lerSenha();
// void finalizar();

// int main()
// {
// 	alarme();
// 	lerSenha();
// 	finalizar();
// 	alarme();
// }

// void alarme()
// {
// 	cout << "Iniciando...\n";
// 	cout << '\a';
// }

// void lerSenha()
// {
// 	cout << "Senha: ";
// 	int senha;
// 	cin >> senha;
// }

// void finalizar()
// {
// 	cout << "Finalizando...\n";
// }

