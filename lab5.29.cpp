#include<stdio.h>
main()
{
	int a[10][10],i,j,r,c,sum1=0,sum2=0;
	
	printf("enter the order of the matrix\n\n");
	scanf("%d %d",&r,&c);
	
	printf("enter the elements of the matrix\n\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum1+=a[i][j];
			
		}
		printf("sum of %d row is %d\n\n",i,sum1);
			sum1=0;
	}
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			sum2+=a[i][j];
			
		}
		printf("sum of %d column is %d\n",j,sum2);
			sum2=0;
	}
	return 0;
	
}
