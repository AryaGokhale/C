#include <stdio.h>

// declaring the variable which is to be made extern 
// an intial value can also be initialized to x 
int x; 

void auto_storage_class()
{
    //declaring auto variable, it is default way of declaring variables
    printf("Printing auto storage class.\n");
    auto int a = 10;
    printf("Printing auto variable:   %d\n", a);


}


void register_storage_class()
{
    printf("Printing register storage class.\n");
    register char a = 'G';
    printf("Value of variable b declared as register is:   %d\n", a);
    

}

void static_storage_class()

{
    printf("Printing static storage class.\n");
    int i;

    for(i = 1; i<5; i++)
    {
        static int y = 5;

        int p = 10;

        y++;
        p++;

        printf("Value of y:  %d\n",y);
        printf("Value of p:  %d\n",p);

    }
}



void extern_storage_class()

{
    printf("Printing extern storage class.\n");

    // telling the compiler that the variable 
    // 'x' is an extern variable and has been 
    // defined elsewhere (above the main 
    // function) 
    extern int x; 
    x = 2;          /*value of extern variable modified*/

    printf("Modified value of x declared as extern is :    %d\n",x);


}

int main()
{
    auto_storage_class();

    register_storage_class();

    static_storage_class();

    extern_storage_class();

    return 0;

}