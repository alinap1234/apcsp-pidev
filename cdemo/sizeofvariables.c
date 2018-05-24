#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'c';
  float d = 1.23;
  double e=1.79879876665543389;  
  printf("int a value %d and size %d bytes.\n", a, sizeof(a));
  printf("char a value %c and size %d bytes.\n", b, sizeof(b));
  printf("float a value %f and size %d bytes.\n", d, sizeof(d));
  printf("double a value %f and size %d bytes.\n", e, sizeof(e));
}
