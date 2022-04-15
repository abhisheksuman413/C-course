#include <stdio.h>

int main ()
{
    int yr;
    printf(" enter year: ");
    scanf("%d", &yr); 
    if((yr%4==0) && (yr%100!=0) || (yr%400==0))
    {
        printf("the following year is leap year");
    }

    else
    {
        printf("not a laep year");
    }
    return 0;
}