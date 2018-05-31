#include <stdio.h>

int main(int argc, char* argv[])
{
float areaofcircle;
char input[256];
int arg1;
int arg2;
printf("Finding the area of the circle\n");


float areaOfCircle(float a)
{
  return 3.14*a*a;
}

if(argc ==3);
{

int arg1;

if(sscanf(argv[1], "%d", &arg1) == 1)
{
	
	sscanf(argv[1],"%d", &arg1);
}
	else {printf("not an integer");}

int arg2;

if(sscanf(argv[2], "%d", &arg2) == 1)
{
	
      sscanf(argv[2],"%d", &arg2);
}

	else {printf("not an integer");}


printf("lower-bound radius %d and upper-boud radius %d\n", arg1, arg2);

float r;
    for (int i = arg1; i <= arg2; i++)
    { 
     r = areaOfCircle(i);
    printf("Radius = %d, and Area = %f\n", i, r);
    }

}

else   { printf("we're gonna need to ask for some value"
}
