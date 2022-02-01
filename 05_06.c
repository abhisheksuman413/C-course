#include <stdio.h>
int sum(int n){
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}

int main ()
{
    int n;
    printf(" enter the number of sum of natural no you want :\n");
    scanf("%d", &n);
    printf("the sum of first %d natural no is %d", n, sum(n));
   return 0;
}
