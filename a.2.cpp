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
	printf("after rounding it off %d",k);
	
	return 0;
}
