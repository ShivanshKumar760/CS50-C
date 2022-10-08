#include <stdio.h>
#include<cs50.h>

int main(int argc, char const *argv[])
{
	int x=get_int("enter first number :");
	int y=get_int("enter second number:");
	printf("Sum  is :%i\n",x+y );
	return 0;
}