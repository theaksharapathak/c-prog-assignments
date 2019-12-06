#include<stdio.h>
main()
{
	int n,i,sum=0,*ptr;
	printf("enter the size\n");
	scanf("%d",&n);
	
	int arr[n];
	ptr = arr;
	
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	
	printf("sum is %d",sum);
	
	return 0;
	
}
