#include<stdio.h>

void resultantmatrix(int a[100][100],int b[100][100],int c[100][100])
{
	int i,j,k,r1,c1,c2;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",*(*(c+i)+j));
		}
		printf("\n");
	}

}
main()
{
	int r1,c1,r2,c2,i,j,k;
	printf("enter the order of the first matrix\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the order of the second matrix\n");
	scanf("%d %d",&r2,&c2);
	
	int a[r1][c1],b[r2][c2],c[100][100];
	
	printf("enter the elements of the first matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	
	printf("enter the elements of the second matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	
	
	printf("resultant matrix is %d",resultantmatrix(a,b,c));
	
	return 0;
}


