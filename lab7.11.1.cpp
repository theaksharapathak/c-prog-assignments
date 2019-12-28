#include<stdio.h>
main()
{
	int *p,n,var,i,**q,***r;
	printf("enter the no:\n");
	scanf("%d",&var);
	
	p=&var;
	q=&p;
	r=&q;
	
	printf("the value of the variable is %d\n",var);
	printf("the value of the variable is %d\n",*p);
	printf("the value of the variable is %d\n",**q);
	printf("the value of the variable is %d\n",***r);
	
	return 0;
}
