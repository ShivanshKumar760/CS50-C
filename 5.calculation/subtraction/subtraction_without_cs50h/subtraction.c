#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	int y;
	printf("enter a number:");
	scanf("%i",&x);
	y=2;
	printf("\n");
	int diff = x-y;
	printf("difference between %i and %d is : %i\n",x,y,diff);
	return 0;
}