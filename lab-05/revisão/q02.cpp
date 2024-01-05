/*
Variáveis globais podem ser acessadas e modificadas por qualquer função do
programa. Justamente por essa razão elas devem ser evitadas. As variáveis globais
geram programas difíceis de entender e fáceis de quebrar.
Para entender melhor, analise o programa abaixo.
*/

#include <iostream>
using namespace std;
int num;
int f();
int g();
int main()
{
 num = 1;
 cout << f() + g() + num << endl;
}
int f()
{
 num = num + 3;
 return num;
}
int g()
{
 num = 2;
 return num;
}

/*
a. Qual é a ordem de chamada das funções dentro da função principal? Ou
seja, quem será chamada primeiro, f() ou g()?

Resposta: f() será chamada primeiro no visual studio.
mas não há garantia de que isso acontecerá em outro compilador.

b. Qual é o resultado do programa? Ele seria o mesmo se invertêssemos a
ordem das chamadas de f() e g() dentro da função principal?

Resposta: O resultado é 8. Se invertermos a ordem das chamadas, o resultado
será 12.

c. Existe alguma garantia de que as funções f() e g() serão sempre chamadas
na ordem em que elas aparecem no programa?

Resposta: Não. A ordem de chamada das funções não é determinada em nenhuma regra da linguagem C++.
Depende do compilador.
*/