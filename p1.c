//
#include<stdio.h>
void main()
{
int a=5;
int *p;
p=&a;
printf("Address of p variable %u\n",p);
p=p-5;
printf("After increment of p variable %u\n",p);
}
