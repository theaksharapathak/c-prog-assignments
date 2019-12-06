#include<stdio.h>
main()
{
	int a=1,i;
	printf("the given series is:\n");
	for(i=1;i<=20;i++)
	{
		printf("%d\n",a);
		a=a+i;
	}
	return 0;
}
