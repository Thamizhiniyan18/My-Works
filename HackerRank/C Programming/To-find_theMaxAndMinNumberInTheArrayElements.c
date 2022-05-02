#include <stdio.h>
int main()
{
    int a[100], max, min, n;
    printf("Enter the size of the Array : ");
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
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nThe Greatest number the in Array is : %d", max);

    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nThe Smallest number the in Array is : %d", min);
    return 0;
}