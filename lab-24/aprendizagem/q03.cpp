/*
Crie uma união chamada Senha com os campos Alfanumérica e Numérica. Na
função principal pergunte ao usuário se ele quer exibir a senha armazenada ou
gravar uma nova senha no arquivo. Se o arquivo não tiver sido criado ainda, a
opção de exibição não deve fazer nada, a não ser avisar o usuário que o arquivo
não existe.

Use um arquivo binário para guardar a senha. Na gravação da senha, grave
primeiro um número para representar o tipo da senha. O modo alfanumérico
será correspondente ao número 1, e o modo simplesmente numérico será
correspondente ao 2. Quando o usuário abrir o programa e selecionar a opção
de exibição, o tipo da senha deve ser lido para decidir qual campo da união
apresentar na tela (campo alfanumérico ou o campo numérico).
*/

#include <iostream>
#include <fstream>

using namespace std;

union Senha
{
  char alfanumerica[20];
  int numerica;
};

int main()
{
  Senha senha = {0};
  int opcao = 0;
  ofstream arquivo;
  ifstream arquivoLeitura;
  int tipo = 0;

  cout << "Deseja exibir a senha ou gravar uma nova senha? (1 - Exibir, 2 - Gravar): ";
  cin >> opcao;

  if (opcao == 1)
  {
    arquivoLeitura.open("senha.bin", ios::binary);
    if (arquivoLeitura.is_open())
    {
      arquivoLeitura.read((char *)&tipo, sizeof(int));
      if (tipo == 1)
      {
        arquivoLeitura.read((char *)&senha.alfanumerica, sizeof(senha.alfanumerica));
        cout << "Senha: " << senha.alfanumerica << endl;
      }
      else if (tipo == 2)
      {
        arquivoLeitura.read((char *)&senha.numerica, sizeof(senha.numerica));
        cout << "Senha: " << senha.numerica << endl;
      }
    }
    else
    {
      cout << "Arquivo nao existe." << endl;
    }
    arquivoLeitura.close();
  }
  else if (opcao == 2)
  {
    cout << "Digite o tipo da senha (1 - Alfanumerica, 2 - Numerica): ";
    cin >> tipo;
    if (tipo == 1)
    {
      cout << "Digite a senha alfanumerica: ";
      cin >> senha.alfanumerica;
    }
    else if (tipo == 2)
    {
      cout << "Digite a senha numerica: ";
      cin >> senha.numerica;
    }
    arquivo.open("senha.bin", ios::binary);
    arquivo.write((char *)&tipo, sizeof(int));
    if (tipo == 1)
    {
      arquivo.write((char *)&senha.alfanumerica, sizeof(senha.alfanumerica));
    }
    else if (tipo == 2)
    {
      arquivo.write((char *)&senha.numerica, sizeof(senha.numerica));
    }
    arquivo.close();
  }

  return 0;
}