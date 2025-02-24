#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("How many elements you want ?");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (int i = 0; i < n; i++) 
    {
        sum = sum + *(ptr + i);
    }
    printf("The sum of the array elements is: %d\n", sum);
}

/*
for loop step by step:
 If ptr points to arr[0], t
 hen ptr + 1 will point to arr[1],
 ptr + 2 will point to arr[2],
 and so on.


    n = 5 ;
    First iteration (i = 0):
        *(ptr + 0) is the same as arr[0], which is 1.
        sum = 0 + 1; → The sum becomes 1.

    Second iteration (i = 1):
        *(ptr + 1) is the same as arr[1], which is 2.
        sum += 2; → The sum becomes 1 + 2 = 3.

    Third iteration (i = 2):
        *(ptr + 2) is the same as arr[2], which is 3.
        sum += 3; → The sum becomes 3 + 3 = 6.

    Fourth iteration (i = 3):
        *(ptr + 3) is the same as arr[3], which is 4.
        sum += 4; → The sum becomes 6 + 4 = 10.

    Fifth iteration (i = 4):
        *(ptr + 4) is the same as arr[4], which is 5.
        sum += 5; → The sum becomes 10 + 5 = 15.
*/


