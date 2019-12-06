#include<stdio.h>
main()
{
	int i,n;
	float x,sum,t;
	printf("enter the value of x\n");
	scanf("%f",&x);
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	x=x*3.14/180;
	sum=x;
	t=x;
	for(i=1;i<=n;i++)
	{
		t=(t*(-1)*x*x)/(2*i*(2*i+1));
		sum=sum+t;
	}
	
	printf("sin(%.2f)=%.2f",x,sum);
	return 0;
}
