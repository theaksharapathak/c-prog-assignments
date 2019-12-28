#include<stdio.h>
#include<stdlib.h>

main()
{
	int *a,*b,*c,i,j,n;
	
	printf("enter the order of the 1st matrix\n");
	scanf("%d %d",&n,&n);
	
	printf("enter the order of the 2nd matrix\n");
	scanf("%d %d",&n,&n);
	
	a=(int *)malloc(n*n* sizeof(int));
	b=(int *)malloc(n*n* sizeof(int));
	c=(int *)malloc(n*n* sizeof(int));
	
	printf("enter the elements of the first matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(a+i*n+j));
		}
	}
	printf("enter the elements of the second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(b+i*n+j));
		}
	}
	
	printf("addition  \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			*(c+i*n+j)=*(a+i*n+j) + *(b+i*n+j);
		}
	}
	printf("sum of the matrices a and b\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",*(c+i*n+j));
	
		}
		printf("\n");
	}
	
	return 0;
}

