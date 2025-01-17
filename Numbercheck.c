#include<stdio.h>
void checkEvenOdd(int *num) 
{
    if(*num > 0) 
    {
        printf("%d is positive.\n", *num);
    } 
    else 
    {
        printf("%d is Negative.\n", *num);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkEvenOdd(&number);
    return 0;
}
