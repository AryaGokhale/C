#include <stdio.h>
#include <stdarg.h>

double average (int num, ...)   //int num specifies number of variable arguments in this case
{
    va_list variableList;     // va_list   va_start    va_arg     va_end

    va_start(variableList, num);

    double sum = 0.0;
    int i;

    for (i=0; i<num; i++)
    {
        sum += va_arg(variableList, int); 
    }

    va_end(variableList);

    return sum/num;
}

int main()
{
    printf("Average of intergers 10 12 13 14 is: %f \n",average(4, 10,12,13,14) );
}