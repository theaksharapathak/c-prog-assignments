#include<stdio.h>

void swapPtr(int *a,int *b)
{
	int temp;
	
	temp = *a;
	*a=*b;
	*b=temp;
}
void swap(int a, int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
}
main()
{
	int a,b;
	printf("enter the values of a\n");
	scanf("%d",&a);
	
	printf("enter the values of b\n");
	scanf("%d",&b);
	
	printf("before swapping the values are %d and %d\n",a,b);
	
	swapPtr(&a,&b);
	
	printf("after swapping the values are %d and %d\n\n",a,b);
	
	swap(a,b);
	
	printf("after swapping the values are %d and %d",a,b);
	
	return 0;
}
