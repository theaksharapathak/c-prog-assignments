#include<stdio.h>
main()
{
	int a,*p;
	printf("enter the integer:\n");
	scanf("%d",&a);
	p=&a;
	
	printf("value of integer:  %d\n",a);
	printf("value of integer: %d\n",*p);
	printf("value of integer: %d\n",*(&a);
	printf("address of integer: %u\n",p);
	printf("address of integer: %u",&a);
	
	return 0;
}
