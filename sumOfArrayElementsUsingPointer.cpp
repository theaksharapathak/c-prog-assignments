#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("enter the no elements:\n");
	scanf("%d",&n);
	
	int arr[n];
	int *ptr=&arr[n];//or ptr=arr;
	
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		
	}
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("sum of the array element is %d",sum);
	
	return 0;
}
