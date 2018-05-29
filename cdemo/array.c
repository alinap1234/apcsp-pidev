#include <stdio.h>


void myarrayadd(int arr[], int s, int n)
{
	for( int i = 0; i < s; i++)
	{
	arr[i] = arr[i] + n; 
	}
} 


int main()
{
int arr [100];

	for (int i = 0; i < 100; i ++)
	{
	arr[i] = i * i;
	printf("before switiching %d\n", arr[i]);
	}
	myarrayadd(arr, 100, 1);

	for (int i = 0; i < 100; i++)
	{      
	 printf("after adding 1, the element is  %d\n", arr[i]);
	}

}




