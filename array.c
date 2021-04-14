#include <stdio.h>

int main()

{
    int i =0, ele = 0;

    int roll_number [3] = { 1 , 2 , 3 }; //array declaration and array initialization

    for (i=0; i<=2; i++)
    {
        ele = roll_number[i];

        printf("%d\n",ele);
    }

    // 2D array

    int m = 0, n = 0; 

    int matrix[2][3] = {{10,20,30},{40,50,60}};

    for (m=0;m<=1; m++)
    {
        for (n = 0; n<=2; n++)
        {
            
            printf("Value of element in row [%d] and column [%d] is :  %d\n",m,n, matrix[m][n]);

        }
    }

    //3D array

    int p = 0, q= 0;

    char character_matrix[3][4] = { {'a','b','c','d'} , {'e','f','g','h'} , {'i','j','k','l'} };

    for (p = 0; p<3; p++)
    {
        for (q=0 ; q< 4; q++)
        {
            printf("Value of element in row [%d] and column [%d] is :  %c\n",p,q, character_matrix[p][q]);
        }
    }


    return 0;
}