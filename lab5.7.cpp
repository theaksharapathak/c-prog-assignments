#include<stdio.h>
main()
{
	int a[20],i;
	
	a[0]=0;
	a[1]=1;
	for(i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<20;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
