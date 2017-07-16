#include<stdio.h>
int rightrot(int x,int n);
void main()
{
int i,m;
int z;
printf("x:");
scanf("%d",&i);
printf("n:");
scanf("%d",&m);
z=rightrot(i,m);
printf("z:%d",z);

}

int rightrot(int x,int n)
{
x=x>>n;
return x;
}