#include <stdio.h>
int main()
{
    int a[] = {2, 3, 6, 5};
    int b[] = {8, 5, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int c[n];
    for (int i = 0; i < n; i++)
    {
        int sum = a[i] + b[i];
        c[i] = sum;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", c[i]);
        printf(" ");
    }
}