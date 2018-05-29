
#include <stdio.h>

int main()
{
  int a;
  int b;
	for (int i=1; i < 101; i++)
	{
         a= i % 5;
 	 b=i;
	if (a == 0)
	printf("%d is divisible by 5\n", b);
	}

}	  
