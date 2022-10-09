#include<stdio.h>
#include<cs50.h>


int main()
{
    float amount ;
    printf("amount:");
    scanf("%f", &amount);

    int pennies = amount * 100;
    printf("pennies: %i\n",pennies);
    return 0;
}