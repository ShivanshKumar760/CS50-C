#include<stdio.h>
/*
****
*  *
*  *
*  *
****
*/

int main(int argc, char const *argv[])
{
	int n;
	printf("enter the length:");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i==1 || i==n)
			{
				printf("*");

			}
			else
			{
				if(j==1 || j==(n-1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}

		}
		printf("\n");
	}

	return 0;
}