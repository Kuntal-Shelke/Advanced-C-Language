#include<stdio.h>
void main()
{
int a[10];
int i,n,sum=0;
int *p;
printf("Input the number of elements to store in the array(max 10)");
scanf("%d",&n);
printf("input %d number of elements in the array\n",n);
for(i=0;i<n;i++)
{
	printf("element %d:",i+1);
	scanf("%d",&a[i]);
}
p=a; 
for(i=0;i<n;i++)
{
	sum=sum+*p;
	p++;
}
printf("sum of array %d\n",sum);
}
