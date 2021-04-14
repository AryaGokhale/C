#include <stdio.h> 

struct Date
{
    unsigned int d : 5;
    unsigned int m : 4;
    unsigned int y;

};

int main()
{
    struct Date birthday = { 17, 10, 2002};

    printf("Arya's birthday is on: %d/%d/%d \n", birthday.d, birthday.m, birthday.y);

    printf("Size of structure Date is : %ld",sizeof(birthday));


    return 0; 
}
