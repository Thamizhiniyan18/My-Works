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
        if (a[i] % 2 != 0)
        {
            sum = sum + a[i];
        }
    }
    printf("The Elements of the Array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe Sum of the ODD numbers in the Array is : %d", sum);
    return 0;
}