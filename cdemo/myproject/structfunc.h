#include <stdio.h>
#include <string.h>

struct Student {
char firstname [20];
char lastname[20];
char age[50];
char studentid[100];
};


void printStudents(struct Student studentstruct[50], int index);

