#include<stdio.h>
main()
{
	int n,temp,sum=0,r;
	printf("enter the no:\n");
	scanf("%d",&n);
	
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("no is armstrong");
		
	}
	else
	printf("no is not an armstrong no");
	return 0.;
}
