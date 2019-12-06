#include<stdio.h>
#include<string.h>
main()
{
	int a[100][100],b[100][100],r,c,i,j,sum[100][100];
	
	printf("enter the no of rows and columns of the two matrices\n");
	scanf("%d %d",&r,&c);
	
	printf("enter the elements of the first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of the second matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("resultant matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			
		
	
	
	printf("%d\t",sum[i][j]);
	printf("\n");
}
}
	return 0;
}
