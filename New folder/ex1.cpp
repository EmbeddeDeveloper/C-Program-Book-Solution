#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void strTolong(long*,char,int);


void main()
{
clrscr();
/*
long &a=25000;
long &b=20000;
double y,c,t;
long &x=20000;
long &z=15500;
int i,m;

c=(double)(a-b)/(x-z);


m=(int)c;
y=c-m;
t=y*10000;
i=(int)t;

printf("m=%d",m);
printf(".%7.0d",i);

printf("\nC=%lf",c);  */
/*for (i=0;i<10;i++)
{

printf("a=%c",a[i]);
}*/
//c=atol(a);

//printf("\na=%c%c%c%c%c",a[0],a[1],a[2],a[3],a[4]);
//printf("\nc=%ld",c);
unsigned long y2,y1,x2,x1,offset;
double m,t;
long avg=20913;
printf("Enter y2:");
scanf("%ld",&y2);
printf("\nEnter y1:");
scanf("%ld",&y1);
printf("\nEnter x2:");
scanf("%ld",&x2);
printf("\nEnter x1:");
scanf("%ld",&x1);
m=(double)(y2-y1)/(double)(x2-x1);

printf("\nSlope=%lf",m);

offset=y1-x1;
printf("\nOffset=%ld",offset);



t=(double)x2*m + offset;


printf("\nT=%lf",t);


getch();
}




