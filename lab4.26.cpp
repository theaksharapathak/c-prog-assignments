#include<stdio.h>
main()
{
	int n,sum=0,r=0;
	printf("enter the no\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
		
	}
	printf("no in reversed form is %d",r);
	return 0;
}
