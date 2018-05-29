#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

 int d = 40;
 int f = 55;
 int* ptrtod = &d;
 int* ptrtof = &f;

	printf("The value of d is %d\n", d);
	printf("The value of f is %d\n", f);
	printf("The location of d is %d\n", ptrtod);
	printf("The location of f is %d\n", ptrtof);
	printf("AFTER SWITCHING\n");
	

	int temp = *ptrtod;
	*ptrtod = *ptrtof;
	*ptrtof = temp;
	printf( "d is now %d\n", *ptrtod);
	printf("f is now %d\n", *ptrtof);


}
