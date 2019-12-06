#include<stdio.h>
void swap(int* x ,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
main()
{
	int a,b;
	printf("enter the values of a and b\n");
	scanf("%d %d",&a,&b);
	
	printf("before swapping the values are %d and %d\n",a,b);
	
	swap(&a,&b);
	printf("after swapping the values are %d and %d",a,b);
	
	return 0;
}
