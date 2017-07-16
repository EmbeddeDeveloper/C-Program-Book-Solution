/*strncat example */
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
   char destination[25];
	char *source = " States of America";

   strcpy(destination, "United");
	strncat(destination, source, 18);
   printf("%s\n", destination);
   return 0;
} */


/* strncpy example */
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[10];
	char *str1 = "abcdefghi";

	strncpy(string, str1, 3);
	string[3] = '\0';
	printf("%s\n", string);
	return 0;
}  */
#include <stdio.h>
//#include <string.h>
void strncpy(char *s,char *t,int n);
void strncat(char *s1,char *t1,int x);

int main(void)
{
	char string[11]="123";
	char *str1 = "abcdefgh";

	//strncpy(string, str1, 3);
	strncat(string, str1, 3);
	//string[3] = '\0';
	printf("%s\n", string);
	return 0;
}

void strncpy(char *s,char *t,int n)
{
int i;
for(i=0;i<n;i++)
{
while((*s=*t)!='\0')
{s++;
t++;
}
}
}

void strncat(char *s1,char *t1,int x)
{
int j;
j=0;
//for(j=0;j<x;j++)
//{
 while(*s1!='\0')
	s1++;
 while(j<x)
	{
	*s1=*t1;
	s1++;
	//t1++;
	t1=t1+1;
	j++;
	}
	*s1='\0';
 //}
	 //*s1='\0';

}









