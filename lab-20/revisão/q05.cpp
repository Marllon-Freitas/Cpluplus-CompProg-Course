/*
O Padrão C++17 introduziu um novo tipo de if que aceita uma instrução de
inicialização antes da condição:

#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  cout << "Digite um número: ";
  if (cin >> x; x > 0)
    cout << "Número positivo!" << endl;
  else
    cout << "Número negativo!" << endl;
  return 0;
}

O compilador do Visual Studio utiliza por padrão o C++14, mas o código acima só
compila a partir da versão C++17. Altere a versão padrão do compilador em
Projeto > Propriedades de [Projeto]... > Propriedades de Configuração > Geral >
Padrão de Linguagem C++ > Padrão ISO C++17, e execute o programa.
*/

#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  cout << "Digite um número: ";
  if (cin >> x; x > 0)
    cout << "Número positivo!" << endl;
  else
    cout << "Número negativo!" << endl;
  return 0;
}