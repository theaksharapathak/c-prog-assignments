#include<stdio.h>
#include<string.h>


main()

{
	int i,n,start,end;
	
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d:",a[i]);
	}
	
	return 0;

	
	
}
