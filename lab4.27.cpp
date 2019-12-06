#include<stdio.h>
main()
{
	int n1,n2,num,denom,lcm,gcd,r;
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
	while(denom!=0)
	{
		r=num%denom;
		num=denom;
		denom=r;
		
	}
	gcd=num;
	lcm=(n1*n2)/gcd;
	printf("gcd is %d\n lcm is %d",gcd,lcm);
	return 0;
	
	
}
