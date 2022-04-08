#include <stdio.h>
void fun( int *arr, int n){
 int tem;
    for(int i=0; i<(n/2); i++){
        tem=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=tem;
    }
}

int main ()
{
   int arr[]={1,2,3,4,5,6,7};
   fun(arr, 7);
   for ( int i=0; i<7; i++){
       printf("the value %d is %d\n", i, arr[i]);
   }
   return 0;
}