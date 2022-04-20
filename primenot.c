#include <stdio.h>

int main()
{
    int n, result, p;
    printf("enter a number :");
    scanf("%d", &n);
    for (p = n - 1; p > 1; p--)
    {
        result = n%p;
        if (result == 0)
        {
            break;
        }
    }
    if (result == 0)
    {
        printf("this is not prime no");
    }
    else
    {
        printf(" this is prime no");
    }
    return 0;
}