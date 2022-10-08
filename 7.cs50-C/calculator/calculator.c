#include<stdio.h>
#include<cs50.h>


int main()
{
	printf("Menu For Operation To be perfomed in calc\n"
	"a.Press 1 for addition\n"
	"b.press 2 for sub\n"
	"c.press 3  for multiplication\n"
	"d.press 4 for division\n");

	int  opt=get_int("input the mathematical operation:");
	
	int a;
	int b;
	if(opt==1)
	{
		printf("enter two number for addition:");
		scanf("%i%i",&a,&b);
		int sum=a+b;
		printf("Sum is:%d\n",sum);
	}
	else if(opt == 2)
	{
		//printf("enter two number for subtraction:");
		a=get_int("enter first number :");
		b=get_int("enter second number:");
		if(a>b)
		{
			int diff=a-b;
			printf("difference is :%i\n",diff);
		}
		else if(b>a)
		{
			int diff=b-a;
			printf("diffrence is :%d\n",diff);
		}
		else
		{
			int diff=0;
			printf("diffrence is:%i\n",diff);
		}

	}
	else if(opt==3)
	{
		a=get_int("enter first number :");
		b=get_int("enter second number :");
		printf("product is:%d\n",a*b);
	}
	else if(opt==4)
	{
		a=get_int("enter first number :");
		b=get_int("enter second number :");
		printf("division is:%d\n",a/b);
	}
	else
	{
		printf("Invalid Input Operation\n");
	}
		

}
