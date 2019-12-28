#include<stdio.h>

extern int x=98;
int b=8;
main()
{
	int z=9;
	
	//extern int b;
	
	printf("the value of auto variable is %d\n\n",z);
	printf("the value of external variables are %d and %d\n",x,b);
	x=3;
	printf("the vallue of modified external variables is %d",x);
	
	return 0;
}
