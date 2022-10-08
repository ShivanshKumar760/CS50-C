#include<stdio.h>
#include<cs50.h>

int main(int argc, char **argv) {
    int points=get_int("How many points did you loose?");
    if (points<2)
    {
        printf("you lost fewer points than me.\n");
    }
    else if (points>2)
    {
         printf("you lost more points than me.\n");
    }
    else
    {
         printf("you lost same  points as me.\n");
    }
}
