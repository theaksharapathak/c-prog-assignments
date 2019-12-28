#include<stdio.h>

int fun()
{
	static int count=0;
	count++;
	return count;
}
main()
{
	printf("%d\n",fun());
	
	printf("%d\n",fun());
	
	return 0;
}
