#include<stdio.h>
#include<conio.h>
int lowercase(int s);

void main()
{
char z;
char ch;
printf("Enter uppercase:");
scanf("%c",&ch);
z=lowercase(ch);
printf("Lowercase:%c",z);
}

int lowercase(int s)
{
if(s >='A' && s<='a')
return s+'a'-'A';
else
return s;
}