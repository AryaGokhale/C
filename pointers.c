# include <stdio.h>

int main()
{
    int i =10;
   
    int *j;

    j = &i;

    printf("Value of 'i' is: %d \n",i);

    printf("Value of 'i' is: %d \n",*(&i));

    printf("Value of 'i' is: %d \n",*j);


    return 0;
}