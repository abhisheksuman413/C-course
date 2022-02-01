#include <stdio.h>

int fun(int *a)
{

    *a= *a * 10;
    return *a;
}
int main()
{
    int p = 10;
    int *y;
    y = &p;
    printf(" the value is %d\n", fun(y));
    printf("the value of p is %d\n", p);
    return 0;
}