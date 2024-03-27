/*
Complete o programa esqueleto abaixo, fornecendo as funções necessárias.

#include <iostream>
using namespace std;
const int TAM_NOME = 30;
struct aluno
{
  char nome[TAM_NOME];
  int nivel;
};
// solicita e armazena informações de alunos:
// - encerrando ao preencher o vetor ou quando o usuário
// entrar com uma linha em branco para o nome do aluno
// - a função retorna o número de alunos lidos
int PegarInfo(aluno va[], int n);
// mostra o conteúdo de um registro aluno
void Mostrar1(aluno a);
// mostra o conteúdo do registro aluno apontado
void Mostrar2(const aluno *pa);
// mostra o conteúdo do vetor de alunos
void Mostrar3(const aluno va[], int n);
int main()
{
  cout << "Tamanho da classe: ";
  int tam;
  cin >> tam;

  // remove \n para uso do cin.getline
  cin.ignore();
  aluno *ptr = new aluno[tam];
  int inscritos = PegarInfo(ptr, tam);
  for (int i = 0; i < inscritos; ++i)
  {
    Mostrar1(ptr[i]);
    Mostrar2(&ptr[i]);
  }
  Mostrar3(ptr, inscritos);
  delete[] ptr;
  cout << "Feito!\n";
  return 0;
}
*/

#include <iostream>
using namespace std;

const int TAM_NOME = 30;
struct aluno
{
  char nome[TAM_NOME];
  int nivel;
};

int PegarInfo(aluno va[], int n);
void Mostrar1(aluno a);
void Mostrar2(const aluno *pa);
void Mostrar3(const aluno va[], int n);

int main()
{
  cout << "Tamanho da classe: ";
  int tamanhoClasse;
  cin >> tamanhoClasse;

  // remove \n para uso do cin.getline
  cin.ignore();
  aluno *ptrAluno = new aluno[tamanhoClasse];
  int inscritos = PegarInfo(ptrAluno, tamanhoClasse);
  if (inscritos < 0)
  {
    cout << "Erro ao pegar informações dos alunos." << endl;
    delete[] ptrAluno;
    return -1;
  }
  cout << "Alunos inscritos: " << inscritos << endl;
  for (int i = 0; i < inscritos; ++i)
  {
    cout << "Aluno (registro)" << i + 1 << ":\n";
    Mostrar1(ptrAluno[i]);
    cout << "Aluno (passando endereço de registro)" << i + 1 << ":\n";
    Mostrar2(&ptrAluno[i]);
    cout << endl;
  }
  cout << endl;
  cout << "Mostrando todos os alunos inscritos:\n";
  Mostrar3(ptrAluno, inscritos);
  delete[] ptrAluno;
  cout << "Feito!\n";
  return 0;
}

int PegarInfo(aluno va[], int tamanhoClasse)
{
  int qtdAlunos = 0;
  for (int i = 0; i < tamanhoClasse; i++)
  {
    cout << "Nome do aluno: ";
    cin.getline(va[i].nome, TAM_NOME);
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (va[i].nome[0] == '\0')
    {
      break;
    }
    cout << "Nível do aluno: ";
    cin >> va[i].nivel;
    cin.ignore();
    qtdAlunos++;
  }
  return qtdAlunos;
}

void Mostrar1(aluno a)
{
  cout << "Nome: " << a.nome << endl;
  cout << "Nível: " << a.nivel << endl;
}

void Mostrar2(const aluno *pa)
{
  cout << "Nome: " << pa->nome << endl;
  cout << "Nível: " << pa->nivel << endl;
}

void Mostrar3(const aluno va[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Nome: " << va[i].nome << endl;
    cout << "Nível: " << va[i].nivel << endl;
  }
}
