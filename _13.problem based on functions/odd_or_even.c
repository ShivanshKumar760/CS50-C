#include<stdio.h>

void odd_even(int i,int n)
{
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d is even,",i );
		}
		else
		{
			printf("%d is odd ,",i);
		}
	}
}

int main()
{
	int i,n;
	scanf("%i",&n);
	odd_even(i,n);
}