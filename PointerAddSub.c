#include<stdio.h>
void main()
{
int no=50;
int *p;
p=&no;
printf("Address of p variable is %u\n",p);
p=p+3;
printf("After adding 3:address p variable is %u\n",p);
p=p-5;
printf("After sub 5 :address p variable is %u\n",p);
}

