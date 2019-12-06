#include<stdio.h>
main()
{
	int a[100],i,n,e,p;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("enter the element to be inserted\n");
	scanf("%d",&e);
	
	printf("enter the position\n");
	scanf("%d",&p);
	
	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=e;
	
	printf("resultant array is:");
	for(i=0;i<n+1;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
