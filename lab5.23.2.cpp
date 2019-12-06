#include<stdio.h>
main()
{
	int a[100],i,p,e,n;
	
	printf("enter the size of the array\n");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the position from which element needs to be deleted\n");
	scanf("%d",&p);
	
	for(i=p;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("resultant array is\n");
	for(i=0;i<n-1;i++)
	{
		printf(" %d \t",a[i]);
	}
	return 0;
}
