#include<stdio.h>

#define n 2//or in case of rectngular matrix #define row 3 and #define cols 3//
void multiply(int a[n][n],int b[n][n],int res[n][n])
{
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			res[i][j]=0;
			for(k=0;k<n;k++)
			{
				res[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
}
main()
{
	int i,j;
	int a[n][n],b[n][n];
	printf("enter the elements of the 1st matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("enter the elements of the second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(b+i)+j);
		}
	}
	int res[n][n];
	multiply(a,b,res);
	printf("resultant matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",*(*(res+i)+j));
		}
		printf("\n");
	}
	return 0;
	
}
