#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{

printf("Max Val int: %d",INT_MAX);
printf("\tMin Val int: %d",INT_MIN);
printf("\nMax Val UINT: %u",UINT_MAX);

printf("\nMax Val char: %d",CHAR_MAX);
printf("\tMin Val char: %d",CHAR_MIN);

printf("\nMax Val long: %ld",LONG_MAX);
printf("\tMin Val long: %ld",LONG_MIN);
//printf("\nMAX Val long: %u",ULONG_MAX);

printf("\nMax Val sig.char: %d",SCHAR_MAX);
printf("\tMin Val sig.char: %d",SCHAR_MIN);
printf("\nMax Val UCHAR: %d",UCHAR_MAX);

printf("\nMax Val short: %d",SHRT_MAX);
printf("\tMin Val short: %d",SHRT_MIN);

printf("\nMAX Val FLOAT: %f",FLT_MAX);
printf("\nMin Val FLOAT: %f",FLT_MIN);

return 0;
}