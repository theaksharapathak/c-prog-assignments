#include<stdio.h>
main()
{
	int a[10][10],flag=0,i,j,r,c;
	
	printf("enter the rows and column of the matrix\n");
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
			if(i==j && a[i][j]!=1)
			{
			flag=-1;
			break;
			}
			
			else if(i!=j && a[i][j]!=0)
			{
			flag=-1;
			break;
			}
	}
}
	if(flag==0)
	printf("matrix is identity matrix");
	else
	printf("matrix is not an identity matrix");
	
	return 0;
}
