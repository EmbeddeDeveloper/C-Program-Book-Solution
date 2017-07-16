/*#include<stdio.h>
int strlength(char *s);
void squeeze(char* s1,char* s2);

void main()
{
int n;
char a[4];
char b[4];
printf("Enter 1st:");
scanf("%s",&a);
printf("Enter 2st:");
scanf("%s",&b);
//n=strlength(a);
squeeze(a,b);
}


void squeeze(char* s1,char* s2)
{
int i,j;
//char temp[5];
for(i=j=0;s1[i]!='\0';i++)
{
	if(s1[i]!=s2[i])
		s1[j++]=s2[i];
	else
		s1[j]='\0';
}
printf("s1:%c",s1);
}

int strlength(char *str)
{
int l;
l=0;
while(str[l]!='\0')
l++;
return l;
} */

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
