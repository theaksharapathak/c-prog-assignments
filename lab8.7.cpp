#include<stdio.h>
#include<stdlib.h>
main()
{
	int *arr,n,i,j,t;
	
	printf("enter the no of elements\n");
	scanf("%d",&n);
	
	arr=(int *)malloc(n*sizeof(int));
	
	if(arr==NULL)
	{
		printf("memory allocation failed\n");
		exit(0);
	}
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("the array after sorting is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}

	
	
	
}
