#include<stdio.h>

void multiple(int i,int counter,int n)
{	
	while(counter<=n)
	{
		printf("%d\n",i*counter);
		counter++;
	}
	
}
int main()
{
	int i=2;
	int n=10;
	int counter=1;
	multiple(i,counter,n);
}
