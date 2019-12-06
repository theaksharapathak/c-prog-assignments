#include<stdio.h>
main()
{
	int n,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	
	int arr[n],*p=arr;
	
	
	printf("enter elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=arr;
	printf("You entered\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*p);
		
		p++;
	}
	return 0;
	
}
