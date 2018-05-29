
#include <stdio.h>
#include <string.h>



int main()
{

  char c = 97;
  char str1[26];
  char str3[54];
  char str4[100];
  for (int i = 0; i < 26; i++)
  {
	str1[i] = c;
	c++;
  }
  str1[26] = '\0';
 char str2[27] = "abcdefghijklmnopqrstuvwxyz"; 

printf("string one is %s and string two is %s\n", str1, str2);


  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");


for( int i = 0; i < 27; i++) 
        {
          str1[i]= str1[i] - 32;
        }
}


