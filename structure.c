#include <stdio.h>
#include <string.h>

typedef struct 
{
    int roll_num;
    int class;
    char name;

}Student ;

Student s1, s2, s3;

Student *ptr;

int main()
{

    scanf("%d %d %c",&s1.roll_num,&s1.class,&s1.name);

    printf("%d %d %c \n",s1.roll_num,s1.class);

    ptr = &s1;

    printf("%d %d %c \n",ptr->roll_num,ptr->class,ptr->name);
    
    return 0;

    

}

