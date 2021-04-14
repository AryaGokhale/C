#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char name[100];
    char *description;

    description = malloc(10*sizeof(char));

    if (description ==NULL)
    {
        printf("Error memory can't be allocated");

    }
    else
    {
        strcpy(description,"This is Arya Gokhale");
    }
    
    description = realloc(description, 30*sizeof(char));

    if (description ==NULL)
    {
        printf("Error memory can't be allocated");

    }
    else
    {
        strcpy(description,"I am a first year BTech student");
    }

    printf("Introducttion  is: %s\n",name);
    printf("Description: %s\n",description);

    free(description);

}