#include <stdio.h>

int main(int argc, char* argv[])
{
float areaofcircle;
int arg1;
int arg2;
printf("Finding the area of the circle\n");


float areaOfCircle(float a)
{
  return 3.14*a*a;
}

if(argc ==3)
{

int arg1;

	if(sscanf(argv[1], "%d", &arg1) == 1)
	{
	sscanf(argv[1],"%d", &arg1);
	printf("Yay an integer!\n");
	}
	else {printf("First input is not an integer\n");
	return 1;}

int arg2;

	if(sscanf(argv[2], "%d", &arg2) == 1)
	{
	sscanf(argv[2],"%d", &arg2);
	printf("Yay an integer!\n");
	}
	else {printf("Second input is not an integer\n");
	return 1;}


printf("lower-bound radius %d and upper-boud radius %d\n", arg1, arg2);

float r;
    for (int i = arg1; i <= arg2; i++)
    { 
     r = areaOfCircle(i);
    printf("Radius = %d, and Area = %f\n", i, r);
    }

}

else {
printf("we're gonna need to ask for some values\n");

int num;
char input[256];
char input2[256];
int num2;
float r;

fgets(input, 256, stdin);
 
 if (sscanf(input, "%d", &num) != 1)
    {
	printf("Not a valid integer\n");
	return 1;
    } 
fgets(input2, 256, stdin);  

if (sscanf(input2, "%d", &num2) != 1)
    {
	printf("Not a valid integer - try again!\n"); 
	return 1;
    }

 for (int i = num; i <= num2; i++)
    {
      r = areaOfCircle(i);
      printf("Radius = %d, and Area = %f\n", i, r);
    } 

}
}
