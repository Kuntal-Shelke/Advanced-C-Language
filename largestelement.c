#include <stdio.h>
int findLargest(int *arr, int size)
 {
    int max = *arr; // Assume the first element is the largest
    for (int i = 1; i < size; i++)
     {
        if (*(arr + i) > max) 
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main() 
{
    int n,i,arr[20];
    printf("How many element you want");
    scanf("%d",&n);
    for(i = 0; i < n ;i++) {
        printf("Enter a[%d]",i);
        scanf("%d",&arr[i]);
    }
     printf("Original array\n");
     for(i = 0; i < n ;i++) {
        printf("%d ",arr[i]);
     }
     printf("\n");
     int largest = findLargest(arr, 6);
     printf("Largest element in the array: %d\n", largest);
     return 0;
}
