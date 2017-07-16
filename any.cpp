/* strpbrk example

#include <stdio.h>
#include <string.h>

int main(void)
{
   char *string1 = "abcdefghijklmnopqrstuvwxyz";
	char *string2 = "123";
   char *ptr;

   ptr = strpbrk(string1, string2);

   if (ptr)
      printf("strpbrk found first character: %c\n", *ptr);
   else
      printf("strpbrk didn't find character in set\n");

   return 0;
}   */

#include<stdio.h>
#define MAXLINE 1000

int getline(char line[],int max);
int strindex(char source[], char searchfor[]);

//char line[50]="Ah!love could you and I with Fate conpire \n To grasp this sorryscheme of things entire";
char pattern[]="ould";

int main()
{
char line[MAXLINE];
 int found=0;

		while(getline(line,MAXLINE)>0)
			if(strindex(line,pattern)>=0)
			{
			printf("%s",line);
			found++;
			}
		return found;
}

int getline(char s[], int lim)
{
	int c,i;
	i=0;

	while(--lim>0 && (c=getchar())!=EOF	&& c!='\n')
		s[i++]=c;
	if (c=='\n')
		s[i++]=c;
	s[i]='\0';

	return i;
}

int strindex(char s[], char t[])
{
 int i,j,k;

 for(i=0;s[i]!='\0';i++)
	 {	for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
			;
		if(k>0 && t[k]=='\0')
			return i;
	 }
 return -1;

}




