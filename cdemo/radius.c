#include <stdio.h>

int main()
{
float areaofcircle;


float myareafunction(float radius)
{	
	float areaofcircle = radius * radius  * 3.14;
	return areaofcircle;
}

	for (float i = 3.5; i < 13.5; i ++)
{

printf ("the area is %f\n", myareafunction(i));

}
}
