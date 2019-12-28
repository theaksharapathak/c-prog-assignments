#include<stdio.h>
#define rows 2
#define cols 2

void inputmatrix(int a[rows][cols]);
void printmatrix(int a[rows][cols]) ;

main()
{
	int a[rows][cols];
	int i,j;
	
	printf("enter elements in %d*%d\n",rows,cols);
	inputmatrix(a);
	
	printf("elements of %d*%d matrix\n",rows,cols);
	printmatrix(a);
	
	return 0;
}
void inputmatrix(int a[rows][cols])
{
	int i,j;
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
}
void printmatrix(int a[rows][cols])
{
	
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",*(*(a+i)+j));
		}
		
		printf("\n");
	}
}
