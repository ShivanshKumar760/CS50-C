#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("enter the row size:\n");
	int i;//row counter
	int j;//column conter
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}