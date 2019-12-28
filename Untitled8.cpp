#include<stdio.h>

void multiply(int a[100][100],int b[100][100],int res[100][100],int r1, int c1,int r2,int c2)
{
	int i,j,k;
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			res[i][j]=0;
			for(k=0;k<r2;k++)
			{
				res[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
}
main()
{
	int i,j,r1,c1,c2,r2;
	int a[100][100],b[100][100];
	printf("enter the order of the 1st matrix\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the order of the 2nd matrix\n");
	scanf("%d %d",&r2,&c2);
	
	
	printf("enter the elements of the 1st matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of the second matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int res[100][100];
	multiply(a,b,res,r1,c1,r2,c2);
	printf("resultant matrix is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
