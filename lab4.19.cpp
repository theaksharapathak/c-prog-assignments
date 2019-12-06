#include<stdio.h>
main()
{
	int i,fact=1,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
	return 0;
}
