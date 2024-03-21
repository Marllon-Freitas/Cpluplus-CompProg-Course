/*
Reescreva o programa abaixo de forma que ele não utilize as instruções break e
continue, e ainda assim execute a mesma função.

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  int letras = 0;
  char ch;
  cin >> ch;
  while (ch != '!')
  {
    if (ch == '?')
      break;
    if (!isalpha(ch))
    {
      cin >> ch;
      continue;
    }
    letras++;
    cin >> ch;
  }

  return 0;
}
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  int letras = 0;
  char ch;
  cin >> ch;
  while (ch != '!' && ch != '?')
  {
    if (isalpha(ch))
    {
      letras++;
    }
    cin >> ch;
  }

  return 0;
}