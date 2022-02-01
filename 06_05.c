#include <stdio.h>

int main ()
{
   int a=6;
    int *point=&a;
    int **pointt=&point;
    printf("%d",**pointt);
   return 0;
}