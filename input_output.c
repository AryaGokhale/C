
#include <stdio.h>

int main()
{
    /*int input;

    printf("Enter desidered text: ");

    input = getchar();   // int getchar(void):  reads the next available character from the screen and returns it as an integer. 
                                        //This function reads only single character at a time.

    printf("Entered character is: ");

    putchar(input);

    return 0;*/



    /*char name[100];

    printf("Enter your name: \n ");
    gets (name);

    printf("Entered  name was: \n ");
    puts(name);


    return 0;*/

    char name[100];

    int x;

    printf("Enter your name and roll number: \n");

    scanf("%s %d",name,&x);

    printf("You enetered: %s %d \n",name, x);

    return 0;





}