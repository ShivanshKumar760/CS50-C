#include<stdio.h>


	
int main()
{
	int n;
	printf("enter number of rows:");
	scanf("%i",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}