#include <stdio.h>
void displayArmstrongNumbers(); // function declaration
int main() 
{
 displayArmstrongNumbers(); // function calling
 return 0;
}

void displayArmstrongNumbers()  // function defination
 {
	 int num, sum, remainder;
	 for (num = 1; num <= 500; num++) 
	 {
		 sum = 0;
		 int temp = num;
		 while (temp != 0) 
		 {
			 remainder = temp % 10;
			 sum = sum+ remainder * remainder * remainder;
			 temp =temp / 10;
		 }
		 if (sum == num)
		 {
		      printf("%d\n", num);
		 }
	 }
}
