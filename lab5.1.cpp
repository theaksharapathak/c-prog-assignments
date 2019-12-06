#include<stdio.h>
main()
{
	int i,a[100],max,min,n;
	
	printf("enter size of the array\n");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	min=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}
	printf(" max element is %d\n",max);
	printf("min element is %d",min);
	return 0;
	
}
