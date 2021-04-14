#include <stdio.h>

int main()

{
    int a;

    a = 1;

    switch(a)
    {
        case 1:
            printf("Apple");
            break;
        
        case 2:
            printf("Strawberry");
            break;

        case 3:
            printf("Banana");
            break;
        
        default:
            printf("No fruit");
            break;

    }


}