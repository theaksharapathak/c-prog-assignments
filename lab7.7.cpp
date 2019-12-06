//c program to test a dangling pointer 
//by returning the address of a local variable from a functon
#include<stdio.h>

int *fun()
{
	int x=5;
	return &x;
}
int main()
{
	int *ptr=fun();
	
	 
	printf("%d",*ptr);
	return 0;
}
