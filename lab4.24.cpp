#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter the no\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n/=10;
		
	}
	printf("sum =%d",sum);
	return 0;
}
