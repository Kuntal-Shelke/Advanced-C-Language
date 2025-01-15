#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int num1, num2;
     // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    // Print values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    // Call the swap function
    swap(&num1, &num2);
     // Print values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

