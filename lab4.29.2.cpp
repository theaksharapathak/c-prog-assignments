#include<stdio.h>
main()
{
	int i,j,r;
	printf("enter the no of rows\n");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=r;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
