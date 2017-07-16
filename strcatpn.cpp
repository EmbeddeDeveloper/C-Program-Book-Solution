/*strcat example */

#include <string.h>
#include <stdio.h>
void concatarray(char *str1,char *str2);
void concatpointer(char *s1,char *s2);
int main(void)
{
	char destination[25];
	char *blank = " ", *c = "C++", *Borland = "Borland";

	/*strcpy(destination, Borland);
	strcat(destination, blank);
	strcat(destination, c);
	*/

	 //concatarray(destination, Borland);
	// concatarray(destination, c);
	 //printf("Array:%s\n", destination);

	//concatpointer(destination, Borland);
	strcpy(destination,Borland);
	concatpointer(destination, blank);
	concatpointer(destination, c);
	printf("Pointer:%s\n", destination);

	return 0;
}

void concatpointer(char *s1,char *s2)
{
	  while(*s1!='\0')
				 s1++;
	  while(*s2!='\0')
	  {
				*s1=*s2;
				 s1++;
				 s2++;
     }
		*s1='\0';
}


void concatarray(char *str1,char *str2)
{
int i,j;
i=0;j=0;
 while(str1[i]!='\0')
			 i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	//printf("\nConcatenated String is %s",str1);
}



