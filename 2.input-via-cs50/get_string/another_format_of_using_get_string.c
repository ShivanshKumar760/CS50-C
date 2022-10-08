#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	printf("hello, %s\n",get_string("whats your name? "));
	return 0;
}