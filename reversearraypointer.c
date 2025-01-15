#include <stdio.h>
int main() 
{
    int n,i,a[10];
    int *p;
    printf("How many element you want");
    scanf("%d",&n);
    
    for(i = 0; i < n ;i++) {
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Original array\n");
    p=&a[0];
    for(i = 0; i < n ;i++) {
        printf("%d ",a[i]);
        p++;
    }
    printf("\n");
    printf("reverse array\n");
    p=&a[n-1];
    for(i = n-1; i >=0 ;i--) {
        printf("%d ",a[i]);
        p--;
    }
   return 0;
}

