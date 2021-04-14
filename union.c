#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char Name[50];

};

int main()
{

    union Data data;

    printf("Memory size is:  %d\n", sizeof(data));


// corrupt values displayed for i and f as only one element that is Name in this case can be accessed at a time// 
    data.i = 10;
    data.f = 98.7642;
    strcpy (data.Name,"Arya Gokhale");

    printf("Int value:  %d\n", data.i);
    printf("float value:  %f\n", data.f);
    printf("Name:  %s\n", data.Name);
    printf("\n");

// correct way of displaying data using union//

    union Data test;

    test.i = 20;
    printf("Int value:  %d\n", test.i);

    test.f = 96.7598;
    printf("float value:  %f\n", test.f);

    strcpy(test.Name, "Arya Gokhale");
    printf("Name:  %s\n", test.Name);


    return 0;

}
