#include<stdio.h>
main()
{
	int i,j,isPrime,n;
	printf("Find prime nos between 1 to : \n");
	scanf("%d",&n);
	
	printf("All prime nos from 1 to %d\n",n);
	
	for(i=2;i<=n;i++)
	{
		isPrime=0;
		
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			isPrime=1;
			break;
		}
		
		if(isPrime==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
