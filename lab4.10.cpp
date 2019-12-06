// write a program to compute,sum=1+1/2+1/3+1/4+....1/n
#include<stdio.h>
main()
{
	int i,n,sum=0,a;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1/i;
		// sum=sum+a;
		sum+=a;
		printf("Sum is ", sum);
	
	}
	// instagram mat chalao, padhai ke time, bahut maar khayegi
	printf("sum = %d",sum);
	return 0;
}
