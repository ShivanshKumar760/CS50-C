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

    printf("%f\n",div);

}