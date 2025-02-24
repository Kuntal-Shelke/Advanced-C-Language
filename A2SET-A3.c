#include<stdio.h>
void acceptNumbers(int* arr, int n);
void displayReverse(int* arr, int n);
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    acceptNumbers(arr, n);
    displayReverse(arr, n);
}
void acceptNumbers(int* arr, int n) 
{
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", (arr + i)); 
    }
}
void displayReverse(int* arr, int n)
 {
    printf("\nArray in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

