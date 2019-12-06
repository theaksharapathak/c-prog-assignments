#include<stdio.h>
main()
{
	int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,sum=0,i,j,k;
	printf("enter the no of rows and column of the first matrix\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the elements of the first matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the no of rows and columns of the second matrix\n");
	scanf("%d %d",&r2,&c2);
	
	if(c1!=r2)
	{
		printf("matrices can't be multiplied\n");
	}
	else
	{
		printf("enter the elements of the second matrix\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			
		}
	}
	printf("product of the matrix is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d",c[i][j]);
			
		}
		printf("\n");
	}
	return 0;
	
}
