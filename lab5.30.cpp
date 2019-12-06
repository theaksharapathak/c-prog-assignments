#include<stdio.h>
main()
{
	int a[10][10],i,j,r,c,count=0;
	
	printf("enter the order of the matrix\n");
	scanf("%d %d",&r,&c);
	
	printf("enter the elements of the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			
			if(a[i][j]==0)
			{
				count ++;
			}
		}
	}
	if(count>((r*c)/2))
	printf("matrix is a sparse matrix\n");
	
	else
	printf("matrix is not a sparse matrix\n");
	
	printf("no of zeroes in the matrix is %d",count);
	
	return 0;
	
}
