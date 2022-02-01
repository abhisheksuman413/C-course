#include <stdio.h>

int add( int *a, int *b){
    int r;
    r = *a + *b;
    return r;
}

int avg (int *d, int *c ){
    int p;
    p = (*d + *c)/ 2;
    return p;
}
int main ()
{
   int x, y;
   printf("enter the first no :");
   scanf("%d", &x);
   printf("enter the second no :");
   scanf("%d", &y);
   printf (" the sum of two no is %d\n", add( &x , &y));
   printf(" the average of two no is %d\n", avg( &x , &y));
   return 0;
}