#include <stdio.h>

int main()
{

    int a = 10;
    char c = 'a';

    int i_sum;

    float f_sum;

    i_sum = a+c; //compiler is doing integer promotion and converting the value of 'c' to ASCII 
               //before performing the actual addition operation.

    f_sum = a+c; //compiler converts a and c into float

    printf("Int sum is : %d \n", i_sum);

    printf("Float sum is: %f ",f_sum);

    return 0;

}