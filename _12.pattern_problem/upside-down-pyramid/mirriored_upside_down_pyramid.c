#include <stdio.h>
/*
01234
***** 5-5 =0
 **** 5-4 =1
  *** 5-3=2
   **
    *  generalised:n-i 
   */

int main()
{
	int n;
	printf("enter number of rows:");
	scanf("%i",&n);
	int i,j;
	for(i=n;i>=0;i--)//i=4
	{
		for(j=1;j<=n;j++)//1----4
		{
			if(j<=n-i)//1<=1
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