#include <stdio.h>
#include<cs50.h>

int main(int argc, char const *argv[])
{
	string name=get_string("whats your name:");
	printf("My name is %s\n",name);
	return 0;
}