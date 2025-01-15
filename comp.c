#include<stdio.h>
int main()
{
   int a[]={3,54,6,2,1,2};
   int *p=&a[3];
   int *q=&a[3];
   if(p==q)
   {
   
      printf("Yes");
   }
   else
   {
     printf("No");
   }
}
