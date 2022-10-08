#include <stdio.h>
/*
____*
___**
__***
_****
*****   generalised:n-i 
   */

int main()
{
	int n;
	printf("enter number of rows:");
	scanf("%i",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++ )
		{
			if(j<=n-i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}