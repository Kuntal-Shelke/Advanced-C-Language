#include <stdio.h>
void gcd(int n1, int n2); // function declaration 
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
    gcd(n1,n2);   // function calling 
}

void gcd(int n1, int n2)   // function defination
{
   while(n1!=n2)
    {
        if(n1 > n2)
            n1 = n1 - n2;
        else
            n2  = n2 - n1;
    }
    printf("GCD = %d",n1);
}
