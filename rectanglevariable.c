#include <stdio.h>

int main ()
{
   int length,breadth;
   printf("enter the value of length:");
   scanf("%d",&length);
   printf("enter the value of breadth:");
   scanf("%d",&breadth);
   printf("the area of rectangle is %d\n",length*breadth);
   printf("the peremeter of rectangle is %d",2*(length+breadth));
   return 0;
}