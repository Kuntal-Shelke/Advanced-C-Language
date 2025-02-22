/*
Write a function which accepts a number and three flags as parameters.
If the number is even, set the first flag to 1. 
If the number is prime, set the second flag to1.
If the number is divisible by 3 or 7, set the third flag to 1. 
In main, accept an integer and use this function to check if it is even, prime and divisible by 3 or 7. (Hint : pass the
addresses of flags to the function)
*/
#include <stdio.h>
void checkNumber(int num, int *flag1, int *flag2, int *flag3);  // function declaration 
int main() 
 {
 int num;
 int flag1 = 0, flag2 = 0, flag3 = 0;
 printf("Enter an integer: ");
 scanf("%d", &num);
 checkNumber(num, &flag1, &flag2, &flag3);  // function calling
 printf("Flag1 (Even): %d\n", flag1);
 printf("Flag2 (Prime): %d\n", flag2);
 printf("Flag3 (Divisible by 3 or 7): %d\n", flag3);
 return 0;
}

void checkNumber(int num, int *flag1, int *flag2, int *flag3)  // function defination
 {
	 if (num % 2 == 0)
	 {
	    *flag1 = 1;
	 }
	 
    int isPrime = 1,i;
	if (num <= 1) 
	 {
    	 isPrime=0; // Not prime
	 }
	 for (i = 2; i < num; i++) 
	 { 
		 if (num % i == 0)
		 {
		 isPrime=0; // Not prime
		 }
	 }
    if(isPrime==1) 
	 {
	      *flag2 = 1;
	 }
	 if(num % 3 == 0 || num % 7 == 0) 
	 {
	       *flag3 = 1;
	 }
}

