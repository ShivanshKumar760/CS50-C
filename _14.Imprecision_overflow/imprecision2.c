#include<stdio.h>
#include<cs50.h>
int main()
{
    //prompt user for x 
   float x =get_float("x: ");

   //prompt user for y
   float y =get_float("y: ");


    //divide x by y 
    float div=x/y;

    //this unlike the first imprecision1 program will not give value till 6 decimal place but only two decimal
    printf("%.2f\n",div);

}