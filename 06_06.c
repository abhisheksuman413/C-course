#include <stdio.h>

int fun(int a)
{
    a = a * 10;
    return a;
}

int main()
{
    int x = 10;
    fun(x);
    printf("the value is %d", x);
    return 0;
}