
#include <stdio.h>
#include <string.h>


struct Student {
char firstname [20];
char lastname[20];
char age[50];
char studentid[100];
};



void printStudents(struct Student studentstruct[50], int studentnum)
{
  for (int i=1; i<studentnum; i++)
  {
    printf("Student %d:\nFirst name is %s, last name is %s, age is %s, and student id is %s\n", i, studentstruct[i].firstname, studentstruct[i].lastname, studentstruct[i].age, studentstruct[i].studentid);
  }
}


