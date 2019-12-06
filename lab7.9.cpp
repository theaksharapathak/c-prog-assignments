#include<stdio.h>

int add(int *x,int *y)
{
	int sum;
	sum=*x+*y;
	return sum;
}
int subtract(int *x,int *y)
{
	int sub;
	sub=*x-*y;
	return sub;
}
int multiply(int*x,int *y)
{
	int mult;
	mult=(*x)*(*y);
	return mult; 
}
int divide(int *x,int *y)
{
	int div;
	div=(*x)/(*y);
	return div;
}
main()
{
	int n1,n2;
	printf("enter the two nos:\n");
	scanf("%d %d",&n1,&n2);
	
	printf("addition is: %d\n",add(&n1,&n2));
	printf("subtraction is: %d\n",subtract(&n1,&n2));
	printf("mulltiplication is: %d\n",multiply(&n1,&n2));
	printf("division is: %d\n",divide(&n1,&n2));
	
	return 0;
}
