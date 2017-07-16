#include <stdio.h>

int main()
{
   int c, low, high, mid, n, search, array[100];
 
	printf("Enter number of elements\n");
	scanf("%d",&n);
 
	printf("Enter %d integers\n", n);
 
	for ( c = 0 ; c < n ; c++ )
		scanf("%d",&array[c]);
 

	printf("Enter value to find\n");
	scanf("%d",&search);

	low = 0;
	high = n - 1;
	mid = (low+high)/2;

	while( low <= high )
   {
		if ( array[mid] < search )
			low = mid + 1;
		else if ( array[mid] == search )
		{
			printf("%d found at location %d.\n", search, mid+1);
			break;
      }
		else
			high = mid - 1;

		mid = (low + high)/2;
	}
	if ( low > high )
		printf("Not found! %d is not present in the list.\n", search);

 return 0;
 }
