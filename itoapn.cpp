#include<stdio.h>
//#include<string.h>

//#include<stdlib.h>
int string_length(char *pointer);
void reverse(char* string);
void myitoa(int n,char* s);

 int main()
{
int n;
//char *z="usav";
char a[10];
//char* n="usav";
//printf("%s\n",n);
//reverse(z);
printf("Enter int:");
scanf("%d",&n);
myitoa(n,a);
printf("%s",a);
return 0;
}

void reverse(char *string)
{
	int length, c;
	char *begin, *end, temp;
	length=0;
	length = string_length(string);
	//printf("length:%d\n",length);
	begin = string;
	end = string;

	for ( c = 0 ; c < ( length - 1 ) ; c++ )
		end++;

	for ( c = 0 ; c < length/2 ; c++ )
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

int string_length(char *pointer)
{
	int c=0;
	while( *pointer != '\0' )
		{pointer++;
		c++;
	  }
	return c;
}

void myitoa(int n,char* s)
{
	int j,i,sign;
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


