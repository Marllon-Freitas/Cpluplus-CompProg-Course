/*
Construa uma função para exibir mensagens de erro de um sistema. Algumas
mensagens são direcionadas aos programadores, e neste caso elas devem ser
apresentadas de forma simples, em apenas uma linha de texto.

Erro S2043: arquivo operation.sys não encontrado!

Outras mensagens são direcionadas aos usuários do sistema, e neste caso elas
devem ser decoradas e exibidas em várias linhas de texto.

A operação não pôde ser concluída!
Algum problema foi detectado no sistema que impossibilitou a
conclusão da tarefa. Contacte o desenvolvedor do sistema em
dev@sys.com e envie o relatório de erros abaixo.
-----------------------------
Relatório de Erros do Sistema
-----------------------------
Código: S2043
Descrição: arquivo operation.sys não encontrado!

Ao invés de construir um if para selecionar a forma de exibição da mensagem,
construa uma função ExibirErro que receba por parâmetro o número do erro,
uma descrição do erro e uma função de exibição. Construa funções de exibição
para refletir os dois cenários descritos anteriormente.
O programa principal deve ser semelhante ao código abaixo:

#include <iostream>
using namespace std;
// construa a função ExibirErro
// construa a função usuario
// construa a função programador
// ...
int main()
{
  ExibirErro(1245,
             "falha na leitura do arquivo",
             usuario);
  ExibirErro(4521,
             "erro inesperado na inicialização",
             programador);
  return 0;
}
*/

/*
Construa uma função para exibir mensagens de erro de um sistema. Algumas
mensagens são direcionadas aos programadores, e neste caso elas devem ser
apresentadas de forma simples, em apenas uma linha de texto.

Erro S2043: arquivo operation.sys não encontrado!

Outras mensagens são direcionadas aos usuários do sistema, e neste caso elas
devem ser decoradas e exibidas em várias linhas de texto.

A operação não pôde ser concluída!
Algum problema foi detectado no sistema que impossibilitou a
conclusão da tarefa. Contacte o desenvolvedor do sistema em
dev@sys.com e envie o relatório de erros abaixo.
-----------------------------
Relatório de Erros do Sistema
-----------------------------
Código: S2043
Descrição: arquivo operation.sys não encontrado!

Ao invés de construir um if para selecionar a forma de exibição da mensagem,
construa uma função ExibirErro que receba por parâmetro o número do erro,
uma descrição do erro e uma função de exibição. Construa funções de exibição
para refletir os dois cenários descritos anteriormente.
O programa principal deve ser semelhante ao código abaixo:

#include <iostream>
using namespace std;
// construa a função ExibirErro
// construa a função usuario
// construa a função programador
// ...
int main()
{
  ExibirErro(1245,
             "falha na leitura do arquivo",
             usuario);
  ExibirErro(4521,
             "erro inesperado na inicialização",
             programador);
  return 0;
}
*/

#include <iostream>
using namespace std;

void usuario(int codigo, const char *descricao);

void programador(int codigo, const char *descricao);

void exibirErro(int codigo, const char *descricao, void (*funcao)(int, const char *));

int main()
{
  exibirErro(1245, "falha na leitura do arquivo", usuario);
  cout << endl;
  exibirErro(67894, "erro inesperado na inicialização", programador);
  return 0;
}

void programador(int codigo, const char *descricao)
{
  cout << "Erro " << codigo << ": " << descricao << endl;
}

void usuario(int codigo, const char *descricao)
{
  cout << "A operação não pôde ser concluída!" << endl;
  cout << "Algum problema foi detectado no sistema que impossibilitou a" << endl;
  cout << "conclusão da tarefa. Contacte o desenvolvedor do sistema em" << endl;
  cout << "dev@sys.com e envie o relatório de erros abaixo." << endl;
  cout << "-----------------------------" << endl;
  cout << "Relatório de Erros do Sistema" << endl;
  cout << "-----------------------------" << endl;
  cout << "Código: " << codigo << endl;
  cout << "Descrição: " << descricao << endl;
}

void exibirErro(int codigo, const char *descricao, void (*funcao)(int, const char *))
{
  funcao(codigo, descricao);
}