#include<stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	const int MINE=2;
	int points=get_int("whats your point?");
	if(points<MINE)
	{
		printf("You lost fewer points than me\n");
	}
	else if(points>MINE)
	{
		printf("You lost more points than me\n");

	}
	else
	{
		
		printf("You lost same  points as me\n");

	}
	return 0;
}