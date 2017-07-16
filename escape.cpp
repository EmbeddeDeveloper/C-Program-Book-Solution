#include <stdio.h>

char escape(char *s,char* t);

int main()
{
char k;
char s[20]="\n\t";
char t[20];

k=escape(s,t);
printf("%c",k);

return 0;
}

char escape(char *s,char* t)
{
int i;

for(i=0;i<20;i++)
{

  switch(s[i])
	{
		case '0':
		break;
		case '\n':
					printf("\\n");
					t[i]=s[i];
					break;
		case '\t':
				printf("\\t");
				t[i]=s[i];
				break;
		default:
				break;
	}

 }
	return *t;
}

