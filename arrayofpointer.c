#include<stdio.h>
int main()
{
   int *arr[3];
   int a=10,b=20,c=30,i;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
     for(i=0;i<3;i++)
     {
       printf("Value of array = %d\n",*arr[i]);
          printf("address of array = %u\n",arr[i]);
     }
}
