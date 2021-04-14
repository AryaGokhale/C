#include <stdio.h>

int main()
{
    auto int i = 1;
    auto char ch = 'A';
    {
        auto int i = 2;

        {
            auto int i =3;

            printf("%d \n",i);

        }
        
        printf("%d \n",i);

    }

    printf("%d \n",i);
    printf("%c \n",ch);
    
    
    return 0;
}