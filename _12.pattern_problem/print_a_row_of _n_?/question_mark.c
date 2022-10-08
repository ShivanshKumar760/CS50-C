#include<stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	/* code */

	int n;
	do
	{
		n=get_int("width:");
	}while(n<1);
	for(int i=0;i<n;i++)
	{
		printf("?");
	}
	printf("\n");
	return 0;
}