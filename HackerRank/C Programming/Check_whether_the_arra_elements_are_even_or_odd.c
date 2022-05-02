#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);
    printf("Enter the Array Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Array Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("");

    for (int i = 0; i < n; i++)
    {
        printf("\n%d ", a[i]);
        if (a[i] % 2 == 0)
        {
            printf("- EVEN NUMBER ");
        }
        else
        {
            printf("- ODD NUMBER ");
        }
    }

    return 0;
}