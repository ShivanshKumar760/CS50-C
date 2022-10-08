#include<stdio.h>
void meow()
{
    printf("meow\n");
}
int main(int argc, char **argv) {

    printf("demo to declare a function\n");
    printf("the syntax is:\n"
    "return_data_type func_name(parameter1, parameter2,parameter3.....n\n"
    "{\n"
    "      code block;\n"
    "}\n"
    "   \n"
    "   \n"
    "example:\n"
    "int fact(int n)\n"
    " {\n"
    " return n*fact(n-1);\n" 
    "}\n" );
    int i;
    for (i = 0; i < 3;i++) {
        meow();
    }
    return 0;

}