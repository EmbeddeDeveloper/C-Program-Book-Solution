#include <stdio.h>
//#include<string.h>
int strlength(char* s);

main()
{
int number;
int ch;
char sh[100];
int i=0,j=0;
printf("input No in Hex: ");
scanf("%s",&sh);
number = 0;
i =strlength(sh);
//i =strlen(sh);
printf("I : %d\n",i);
j=0;
while(i!=0)
{
ch = sh[j];
printf("Ch:%d\t%d\t%d\n",ch,'7',ch-'7');
if(('0' <= ch && ch <= '9'))
{
number = number * 16;
printf("Number :%d\n",number);
number = number + (ch - '0');
}
if(('A' <= ch && ch && ch <= 'F'))
{
number = number * 16;
printf("Number :%d\n",number);
number = number + (ch - '7');
}

printf("Number :%d\n",number);
i--;
j++;
}
 printf("The O/p No in Decimal is : %d\n",number);
 return 0;
}

int strlength(char* s)
{
int l,j;
l=0;
//while(s[l]!='\0')
for(j=0;s[j]!='\0';j++)
l++;
return l;
}
