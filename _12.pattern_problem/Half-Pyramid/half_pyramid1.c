#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	printf("enter number of rows:");
	scanf("%i",&n);
	int i;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}