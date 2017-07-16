/*strncat example */
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
   char destination[25];
	char *source = " States of America";

   strcpy(destination, "United");
	strncat(destination, source, 18);
   printf("%s\n", destination);
   return 0;
} */


/* strncpy example */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[10];
   char *str1 = "abcdefghi";

	strncpy(string, str1, 3);
	string[3] = '\0';
	printf("%s\n", string);
   return 0;
}








