#include <stdio.h>
int main()
{
    int a[100], sum = 0, n;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    printf("Enter the Elements of the Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Array Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nThe Sum of the Elements of The Array is : %d", sum);
}