#include <cmath>
#define PI 3.14159265

float modulo(float x, float y)
{
  return sqrt(pow(x, 2) + pow(y, 2));
}

float angulo(float x, float y)
{
  return atan2(y, x) * 180 / PI;
}