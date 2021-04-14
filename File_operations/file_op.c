#include <stdio.h>

int main()
{
    FILE *fptr;
    char wdata[20] = "Hi this is Gracie.";

    fptr = fopen("test.txt","a");

    if(fptr == NULL)
    {
        printf("File does not exist");
    }

    else
    {
        fputs(wdata, fptr);
        fputs("\n",fptr);        
    }

    fclose(fptr);

    return 0;
    
}