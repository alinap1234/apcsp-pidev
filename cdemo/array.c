#include <stdio.h>


int main()
{
int arr [100];

	for (int i = 0; i < 100; i ++)
	{
	arr[i] = i * i;
	printf("before switiching %d\n", arr[i]);
	}
	
        int myarrayadd(int arr[], int s, int n)
        {
	arr[s] = n + s;
	return arr[s];
   	} 


       printf("after adding 1, the element is  %d\n", myarrayadd( &arr [100] ,arr [10], 1));

}




