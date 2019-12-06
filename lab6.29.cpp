#include<stdio.h>

void enterdata(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2);
void mult(int a[10][10],int b[10][10],int c[10][10],int r1,int c2,int c1);
void display(int c[10][10],int r1,int c2);

int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
	
	printf("enter the order of the first matrix\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the order of the second matrix\n");
	scanf("%d %d",&r2,&c2);
	
	while(c1!=r2)
	{
		printf("Error! the column of the first matrix is not equal to the row of the second matrix\n");
			printf("enter the order of the first matrix\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the order of the second matrix\n");
	scanf("%d %d",&r2,&c2);
	}
	
	enterdata(a,b,r1,c1,r2,c2);
	mult(a,b,c,r1,c2,c1);
	display(c,r1,c2);
	
	return 0;
}
void enterdata(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2)
{
	int i,j;
	printf("enter elements of first matrix \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter elements a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of the second matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("enter elements b%d%d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
}
void mult(int a[10][10],int b[10][10],int c[10][10],int r1,int c2,int c1)
{
	int i,j,k;
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
}
void display(int c[10][10],int r1, int c2)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
