#include<stdio.h>
#include<string.h>
//void printd(int x);
//void myitoa(int n,char* s);
void reverse(char *x, int begin, int end);

int main()
{

int j;
char *i="usav";

j=strlen(i)-1;
reverse(i,0,j);
printf("reversed string:%c",i);

return 0;
}

/*void printd(int x)
{
	if(x<0)
	{
	putchar('-');
	x=-x;
	}
		if(x/10)
		  {printf("x:%d\n",x);
			printd(x/10);
			//printf("x1:%d\n",x);
			}
		putchar(x%10+'0');

} */

void reverse(char *x, int begin, int end)
{
	char c;

	if (begin >= end)
		return;

	c          = *(x+begin);
	*(x+begin) = *(x+end);
	*(x+end)   = c;

	reverse(x, ++begin, --end);


}
 /*
void myitoa(int n,char* s)
{ int i;
	if(n<0)
	{
	putchar('-');
	n=-n;
	}

	if(n/10)
	{
	  myitoa(n/10,s);
	}

	 *s=(n%10)+'0';
	strrev(s);
	putchar(*s);

}  */
