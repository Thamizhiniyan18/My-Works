#include <stdio.h>
int main()
{
    int a[2][2];
    printf("Enter the Elements of the Matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Elements of the Matrix are : ");
    for (int i = 0; i < 2; i++)
    {
        printf("\t");
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
        }
    }
}