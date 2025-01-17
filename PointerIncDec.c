#include<stdio.h>
void main()
{
int a=22;
int *p;
p=&a;
printf("Original Address=%u\n",p);
p++;
printf("after increment is=%u\n",p);
p--;
printf("after decrement is=%u\n",p);
}
