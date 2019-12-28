#include<stdio.h>
#define ROWS 2
#define COLS 2

void inputmatrix(int a[ROWS][COLS]);
void printmatrix(int a[ROWS][COLS]) ;

main()
{
	int a[ROWS][COLS];
	int i,j;
	
	printf("enter elements in %d*%d\n",ROWS,COLS);
	inputmatrix(a);
	
	printf("elements of %d*%d matrix\n",ROWS,COLS);
	printmatrix(a);
	
	return 0;
}
void inputmatrix(int a[ROWS][COLS])
{
	int i,j;
	
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
}
void printmatrix(int a[ROWS][COLS])
{
	
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			printf("%d ",*(*(a+i)+j));
		}
		
		printf("\n");
	}
}
