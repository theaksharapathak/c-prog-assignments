#include<stdio.h>
main()
{
	int x,foot,yard;
	printf("enter the inches\n");
	scanf("%d",&x);
	foot=12*x;
	yard=36*x;
	printf("feet and yard values are %d %d",foot,yard);
	return 0;
}
