#include "structfunc.h"
#include <stdio.h>
#include <string.h>


int main()
{

int index = 1;
char answer[800];
char input[50];
char input2[50];

struct Student studentstruct[400];

printf("Would you like to enter your information? (y/n) \n");
fgets(input, 256, stdin);
sscanf(input, "%s", answer);

while (strcmp(answer, "y")==0)
{
printf("Please enter student's first name\n");
fgets(input, 256, stdin);
sscanf(input, "%s", studentstruct[index].firstname);


printf("Please enter student's last name\n");
fgets(input, 256, stdin);
sscanf(input, "%s", studentstruct[index].lastname);

printf("Please enter student's age\n");
fgets(input, 256, stdin);
sscanf(input, "%s", studentstruct[index].age);

printf("Please enter student ID\n");
fgets(input, 256, stdin);
sscanf(input, "%s", studentstruct[index].studentid);

printf("Here are your inputs:\n First Name: %s\n Last Name: %s\n Age: %s\n Student id: %s\n", studentstruct[index].firstname, studentstruct[index].lastname, studentstruct[index].age, studentstruct[index].studentid); 

printf("Would you like to continue (y/n)? \n");
fgets(input, 256, stdin);
sscanf(input, "%s", answer);

index++; 

}

printStudents(studentstruct, index);
return 1;


}
