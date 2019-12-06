#include<stdio.h>
main()
{
	int a[10][10],i,j,r,c,even=0,odd=0;
	printf("enter the rows and column of the matrix\n\n");
	scanf("%d %d",&r,&c);
	
	printf("enter the elements of the matrix\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			
			if(a[i][j]%2==0)
			even++;
			
			else
			odd++;

		}
	}

	printf("\nfrequency of even no is %d\n",even);
	printf("frequency of odd no is %d\n",odd);
	
	return 0;
}
