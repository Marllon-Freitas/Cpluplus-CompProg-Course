/*
Considerando os fragmentos de código abaixo:

double Multiplicar(double x, double y)
{
  return x * y;
}
void Atribuir(CharSet *dest, const char *texto)
{
  dest->tam = strlen(texto) + 1;
  // remove string antiga
  if (dest->str != nullptr)
    delete[] dest->str;
  // cria nova string
  dest->str = new char[dest->tam];
  // copia conteúdo para nova string
  int i = 0;
  while (texto[i])
    dest->str[i++] = texto[i];
  // finaliza string com \0
  dest->str[dest->tam - 1] = '\0';
}
int Tamanho(CharSet *texto)
{
  return texto->tam;
}
int Minimo(int a, int b)
{
  return (a < b ? a : b);
}

Quais funções são boas candidatas para serem inline?
*/

double Multiplicar(double x, double y)
{
  return x * y;
}
void Atribuir(CharSet *dest, const char *texto)
{
  dest->tam = strlen(texto) + 1;
  // remove string antiga
  if (dest->str != nullptr)
    delete[] dest->str;
  // cria nova string
  dest->str = new char[dest->tam];
  // copia conteúdo para nova string
  int i = 0;
  while (texto[i])
    dest->str[i++] = texto[i];
  // finaliza string com \0
  dest->str[dest->tam - 1] = '\0';
}
int Tamanho(CharSet *texto)
{
  return texto->tam;
}
int Minimo(int a, int b)
{
  return (a < b ? a : b);
}


/*
Resposta:
As funções Multiplicar, Tamanho e Minimo são boas candidatas para serem inline.
*/
