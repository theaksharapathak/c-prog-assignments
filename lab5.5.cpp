#include<stdio.h>
main()
{
	int a[100],b[100],t[100],i,n,m;
	printf("enter the size of the first array\n");
	scanf("%d",&n);
	
	printf("enter the elements of the first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of the second array\n");
	scanf("%d",&m);
	
	printf("enter the elements of the second array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
		printf("adding these arrays\n");
	for(i=0;i<n;i++)
	{
		t[i]=a[i]+b[i];
	
		printf("\n %d\n",t[i]);
	}
	return 0;
}

