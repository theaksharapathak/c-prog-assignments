#include<stdio.h>
main()
{
	int a[100],n,sum=0,avg,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	
	printf(" sum is %d\n average is %d",sum,avg);
	return 0;
}
