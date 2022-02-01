#include <stdio.h>

void sumavg( int a, int b , int *sum , float *avg){
    *sum = a + b;
    *avg =(float) *sum / 2;
}

int main ()
{
   int x , y , summ ;
   float avgg ;
   printf("Enter the first no :");
   scanf("%d", &x);
   printf("Enter the second no :");
   scanf("%d", &y);
   sumavg(x , y , &summ , &avgg);
   printf(" The sum of two no is %d\n",summ);
   printf(" the avg of two no is %f\n", avgg);
   return 0;
}