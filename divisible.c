#include <stdio.h>

int main ()
{
    int number;
    printf("enter a number :");
    scanf("%d", &number);
    if (number%97==0)
    {
        printf("Number is divisible");
    }
    else
    {
        printf("not divisible");
     }
   
   return 0;
}