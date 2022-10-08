#include <stdio.h>

int main()
{
	int n;
	printf("enter number of rows:");
	scanf("%i",&n);
	int i,j;
	for(i=n;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}