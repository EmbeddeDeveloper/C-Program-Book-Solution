#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

void reverse(char* s);
void myitoa(int n,char* s);

 int main()
{
int n;
char a[10];
//char* n="usav";
//printf("%s\n",n);
//reverse(n);
printf("Enter int:");
scanf("%d",&n);
myitoa(n,a);
printf("%s",a);
return 0;
}

void reverse(char* m)
{
int k,j,c;

	for(k=0,j=strlen(m)-1;k<j;k++,j--)
		{
			c=m[k];
			m[k]=m[j];
			m[j]=c;

		}
			//printf("%s",m);


}


void myitoa(int n,char* s)
{
	int i,sign;
		if((sign=n)<0)
			n=-n;
		i=0;
	do
	{
		s[i++]=(n%10)+'0';
	}while((n/=10)>0);

	if(sign<0)
		s[i++]='-';
	s[i]='\0';

	//strrev(s);
   reverse(s);

}



