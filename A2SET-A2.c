#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int min = *ptr, max = *ptr;
    for(int i = 1; i < n; i++) 
    {    
        ptr = arr + i; // Equivalent to ptr=&arr[i]
        if(*ptr < min) 
        {
            min = *ptr; 
        }
        if(*ptr > max) 
        {
            max = *ptr; 
        }
    }
    int range = max - min;
    printf("The range of the array elements is: %d\n", range);
}

