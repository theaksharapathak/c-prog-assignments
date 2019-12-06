#include<stdio.h>
main()
{
	int i,n,sum=0,fact=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+fact;
	}
	printf("sum = %d",sum);
	return 0;
}
