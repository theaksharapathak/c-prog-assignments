#include<stdio.h>
main()
{
	float a;
	int k=0;
	printf("enter the no\n");
	scanf("%f",&a);
	if(a<0)
	{
		k=k+a-0.5;
	}
	else
	{
		k=k+a+0.5;
	}
	printf("round off value is %d",k);
	return 0;
}
