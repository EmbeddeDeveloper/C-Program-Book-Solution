#include<stdio.h>
//#include<ctype.h>
#define MAXLINE 100
double atof(char s[])
{
int sign,i;
double val,power;

//for(i=0;isspace(s[i]);i++)
for(i=0;s[i]=='\0';i++)
	 ;
	sign=(s[i]=='-')?-1:1;
		if(s[i]=='+'||s[i]=='-')
			++i;
		//for(val=0.0;isdigit(s[i]);i++)
			for(val=0.0;s[i]>='0' && s[i]<='9';i++)
			val = 10.0*val+(s[i]-'0');
		if(s[i]=='.')
		i++;
		//for(power=1.0;isdigit(s[i]);i++)
		for(power=1.0;s[i]>='0' && s[i]<='9';i++)
			{
			val = 10.0*val+(s[i]-'0');
			power *=10.0;
			}

			return sign*val/power;
}

int main()
{
//double sum;
double atof(char []);
char line[MAXLINE];

int getline(char line[],int max);

//sum=0;
while(getline(line,MAXLINE)>0)
{	printf("\nexpo:\n\t%e\n",atof(line));
	//printf("g format:\n\t%g\n",atof(line));
	//printf("f format:\n\t%f\n",atof(line));
 }	return 0;

}

int getline(char s[],int lim)
{
int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i]=c;
		if(c=='\n')
		{
		 s[i]=c;
		 ++i;
		}
		s[i]='\0';
		return i;

}