#include<stdio.h>
#include<stdlib.h>

main()
{
	int **arr,row,col,i,j;
	
	printf("enter the no of rows\n");
	scanf("%d",&row);
	
	arr=(int **)malloc(row*sizeof(int *));
	
	printf("enter the no of columns\n");
	scanf("%d",&col);
	
	arr[i]=(int *)malloc(col*sizeof(int));
	
	printf("enter the elements of the array\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",(*(arr+i)+j));
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	
	int n;
	
	printf("enter the no to be added to the matrix\n");
	scanf("%d",&n);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			(*(*(arr+i)+j))+=n;
		}
	}
	printf("after addition\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",(*(*(arr+i)+j)));
		}
		printf("\n");
	}
	return 0;
	
}
