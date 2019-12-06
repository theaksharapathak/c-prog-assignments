#include<stdio.h>
main()
{
	int n1,n2,num,denom,r,lcm,gcd;
	printf("enter the two nos\n");
	scanf("%d %d",&n1,&n2);
	
	if(n1>n2)
	{
		num=n1;
		denom=n2;
	}
	else
	{
		num=n2;
		denom=n1;
	}
	do
	{
		r=num%denom;
		num=denom;
		denom=r;
	}
	while(denom!=0);
	gcd=num;
	lcm=(n1*n2)/gcd;
	
	printf("gcd = %d\n lcm = %d",gcd,lcm);
	return 0;
}
