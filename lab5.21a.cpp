#include<stdio.h>
main()
{
	int a[100][100],b[100][100],r[100][100],r1,c1,r2,c2,i,j,k;
	
	printf("enter the rows and size of the first matrix\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the rows and size of the second matrix\n");
	scanf("%d %d",&r2,&c2);
	
	while(c1!=r2)
	{
		printf("Error! column of first matrix is not equal to row of second matrix\n");
		printf("enter the rows and and column of first matrix\n");
		scanf("%d %d",&r1,&c1);
		
		printf("enter the rows and column of second matrix\n");
		scanf("%d %d",&r2,&c2);
	}
	printf("elements of matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			r[i][j]=0;
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				r[i][j]= r[i][j]+ a[i][k] * b[k][j];
			}
		}
	}
	printf("output matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d   ",r[i][j]);
		}
		printf("\n\n");
	}
	
	return  0;
	
	
}
