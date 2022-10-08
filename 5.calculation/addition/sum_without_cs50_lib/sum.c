#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("Enter two number of your choice:");
	//format specifier for int is %d and %i any can be used depending on the compiler
	scanf("%i%i",&a,&b);
	int sum=a+b;
	printf("\n");
	printf("Sum is:%i\n",sum);
	return 0;
}