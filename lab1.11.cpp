#include<stdio.h>
main()
{
	int a,b;
	printf("enter the two nos\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d\n b=%d",a,b);
	return 0;
}
