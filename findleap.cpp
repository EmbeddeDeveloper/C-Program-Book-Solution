#include<stdio.h>

int day_of_year(int year,int month,int day);
void month_day(int year,int yearday,int *pmonth,int *pday);

static char daytab[2][13]={
									{0,31,28,31,30,31,30,31,31,30,31,30,31},
									{0,31,29,31,30,31,30,31,31,30,31,30,31}
									};

void main()
{
int yr,mnth,dy;
printf("Enter Day:");
scanf("%d",&dy);
printf("Enter Month:");
scanf("%d",&mnth);
printf("Enter Year:");
scanf("%d",&yr);
//day_of_year(yr,mnth,dy);
printf("%d",day_of_year(yr,mnth,dy));

//month_day(yr,59,&mnth,&dy);
//printf("%d/%d/%d",dy,mnth,yr);
}

int day_of_year(int year,int month,int day)
{
int i,leap;
//leap=year%4==0 && year%100!=0 || year%400==0;
leap=year%4;
if(leap)
{
for(i=1;i<month;i++)
	day +=daytab[leap][i];
return day;
}
else
{
for(i=1;i<month;i++)
	day +=daytab[leap][i];
return day;
}
}

void month_day(int year,int yearday,int *pmonth,int *pday)
{
int i,leap;
//leap=year%4==0 && year%100!=0 || year%400==0;
leap=year%4;
if(leap)
{
for(i=1;yearday>daytab[leap][i];i++)
	yearday -=daytab[leap][i];
*pmonth=i;
*pday=yearday;
}
}
