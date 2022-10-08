#include<stdio.h>


int main()
{
	int a;
	int b;
	//lets assign values to variable 
	a=7;
	b=6;
	//suppose if we wanna print less if a is less than b for that we will 
	//actually use conditon
	if(a<b)
	{
		printf("less\n");
	}
	//and print greater if a is greater then b
	else if(a>b)
	{
		printf("greater\n");
	}
	else
	{
		printf("both are equal\n");
	}
	return 0;
}
