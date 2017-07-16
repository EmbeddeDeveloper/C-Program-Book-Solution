#include <stdio.h>
#include <conio.h>
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp=0;

int getch(void)
{
return (bufp>0)?buf[--bufp]:getchar();
}

int main (void)
{

	int c;
	//printf("\nEOF = %d", EOF);
	printf("type in a letter on your keyboard :");
	c = getch();
	//printf("\nEOF2 = %d", EOF);
	putch(c);
	//printf("\nEOF3 = %d", EOF);
	return 0;

}