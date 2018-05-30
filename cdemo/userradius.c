#include <stdio.h>

int main()
{
float areaofcircle;
char input1[256];
char input2[256];


fgets(input1, 256, stdin);
fgets(input2, 256, stdin);

int num;

if(sscanf(input1, "%d", &num) == 1);
	printf("yes");


if(sscanf(input2, "%d", &num) == 1);
        printf("yes");


float myareafunction(float radius)
{       
        float areaofcircle = radius * radius  * 3.14;
        return areaofcircle;
}

        for (float i = &num1 ; i < &num2; i ++)
{

printf ("the area is %f\n", myareafunction(i));

}
}
