#include <stdio.h>

#define LENGTH 10     //#define preprocessor
#define BREADTH 20


int main()
{

    const int HEIGHT = 30; /*constant keyword*/

    int area = LENGTH * BREADTH;
    printf("Area is:  %d\n",area);

    int volume = area * HEIGHT;
    printf("Volume is:  %d\n",volume);
    return 0;
}