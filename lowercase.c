#include <stdio.h>

int main ()
{
   char word;
   printf(" enter the word ");
   scanf("%c", &word);
   if(word>=65 && word<=90)
   {
       printf("this in not lower case");
   }
   else
   {
       printf("this is lower case");
   }
   return 0;
}