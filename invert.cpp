#include<stdio.h>
int invert(int x);
int invert_2(int x[10],int p,int n);
void main()
{
int i[10]={12345},z;
int m,n;

printf("x:%d\n",i);
//scanf("%d",&i);

printf("p:");
scanf("%d",&m);

printf("n:");
scanf("%d",&n);

z=invert_2(i,m,n);
//z=invert(i);
printf("z:%d",z);

}

int invert(int x)//,int p,int n)
{
x=~x;
return x;
}

int invert_2(int x[10],int p,int n)
{
x[p]=~x[p] & (1<<n);

return *x;
}