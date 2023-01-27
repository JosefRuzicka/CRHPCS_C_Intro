#include <stdio.h>

/*
Program to test printing variables of different data types.
*/
void main()
{
    int my_int = 3;
    float my_float = 3.141592f;
    double my_double = 3.141592653589793;
    char my_char = 'p';
    
    printf("Value of pi is:\nint: %d\nfloat: %f\ndouble: %0.15lf\nchar:  %c\n", my_int, my_float, my_double, my_char);
}

