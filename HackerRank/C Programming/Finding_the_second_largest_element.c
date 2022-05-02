#include <stdio.h>
void main()
{
    int i, n, a, b, num;
    a = 0;
    printf("Enter the count of total numbers : ");
    scanf("%d", &n);
    for (i = 1; i < n + 1; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &num);
        if (num > a)
        {
            b = a;
            a = num;
        }
        else if (num > b)
        {
            b = num;
        }
    }
    printf("The second highest number is : %d", b);
}

/*
#include <stdio.h>
int main()
{
    int first, second, t, i, num;
    printf("Enter the count of the total numbers : ");
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        if (i == -1)
        {
            break;
        }
        else if (num > first)
        {
            second = first;
            first = num;
        }
        else if (num > second)
        {
            second = num;
        }
    }

    printf("The Second largest number is %d", second);
    return 0;
}
*/