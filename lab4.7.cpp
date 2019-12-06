#include<stdio.h>
main()
{
	int i,a=1,b=2,next;
	printf("the given series is:\n");
	
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=1;i<=20;i++)
	{
		next=(a+b)-1;
		printf("%d\n",next);
		a=b;
		b=next;
	}
	return 0;
}
