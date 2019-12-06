#include<stdio.h>

void printarray()
{
	int i,n;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	
	int a[n];
	int *ptr;
	ptr=a;
	
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
}
void sumarray()
{
	int sum=0,i,n;
	scanf("%d",&n);
	int a[n];
	int *ptr=&a[n];
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("sum of the array is:%d",sum);	
}
main()
{
	
	printarray();
	
	sumarray();
	
	return 0;
}
