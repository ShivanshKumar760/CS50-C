#include <stdio.h>
#include<math.h>
#include<cs50.h>

int main()
{
    float amount=get_float("amount: ");
    int pennies=round(amount*100);
    printf("pennies: %d\n",pennies);
    
}