#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

void reverse(char* s);
void itob(int n,char* s,int b);

int main()
{
int n,x;

char a[10];
//char* n="usav";
//printf("%s\n",n);
//reverse(n);
printf("Enter Integer:");
scanf("%d",&n);
printf("Enter Base:");
scanf("%d",&x);
itob(n,a,x);
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


void itob(int n, char* s,int b)
{
	int i,sign;
		if((sign=n)<0)
			n=-n;
		i=0;
	do
	{     if(b==2 || b==10 || b==8)
			s[i++]=n%b+'0';
			if(b==16)
			s[i++]=n%b+'7';
	}while((n/=b)>0);

	if(sign<0)
		s[i++]='-';
	s[i]='\0';

	//strrev(s);
	reverse(s);

}

