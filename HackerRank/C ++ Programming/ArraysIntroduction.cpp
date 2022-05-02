#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, t;
    cin >> n;
    int arr[n];
    int rev[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr[i] = t;
    }

    int arrEnd = n - 1;

    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[arrEnd];
        arrEnd = arrEnd - 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << rev[i] << " ";
    }

    return 0;
}