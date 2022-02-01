#include <stdio.h>
void star(int n){
    if(n==1)
    {
        printf("*\n");
        return;
    }
    star(n-1);
    for(int a=1; a<=((n*2)-1); a++)
    {
        printf("*");
    }
    printf("\n");

}

int main ()
{
   int n;
   printf("enter the number\n");
   scanf("%d", &n);
   star(n);
   return 0;
}