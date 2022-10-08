#include<stdio.h>
void mewo(int n);
int main(int argc, char const *argv[])
{
	mewo(3);
	return 0;
}
void mewo(int n)
{
	for(int i=0;i<n;i++)
	{
		printf("mewo\n");
	}
}