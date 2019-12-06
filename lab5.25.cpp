#include<stdio.h>
main()
{
	int a[10][10],i,j,r,c,n,t[10][10];
	printf("enter the rows and columns of the matrix\n ");
	scanf("%d %d",&r,&c);
	
	printf("enter the elements of the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("transpose of the matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",t[i][j]);
		}
	}
	return 0;
}
