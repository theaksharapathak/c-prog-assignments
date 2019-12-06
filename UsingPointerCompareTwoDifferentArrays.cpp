#include<stdio.h>

char cmp(int x[],int y[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(x[i]!=y[i])
		{
			return 1;
			break;
		}
	}
 return 0;
}
main()
{
	int i,n1,n2;
	printf("enter the size of the 1st array\n");
	scanf("%d",&n1);
	
	printf("enter the size of the 2nd array\n");
	scanf("%d",&n2);
	
	int a[n1],b[n2];
	
	printf("enter the elements of the 1st array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements of the 2nd array\n");
	
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	if (cmp(a,b,n1)==0)
	{
			printf("arrays are same\n");	
	}
	

	
		else
		{
		printf("arrays are different");	
		}
		
 
 return 0;
}
