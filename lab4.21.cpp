#include<stdio.h>

main()
{
	int i,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("no is not prime");
			return 0;
		}
	}
	
		printf("no is prime");
		return 0;

	
}
