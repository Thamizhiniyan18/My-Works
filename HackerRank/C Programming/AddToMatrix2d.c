#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2];
    printf("Enter the Elements of the First Matrix : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    printf("The Elements of the First Matrix are : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\n");

    printf("Enter the Elements of the Second Matrix : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    printf("The Elements of the Second Matrix are : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n");

    printf("The Sum of the two Matrix is : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}