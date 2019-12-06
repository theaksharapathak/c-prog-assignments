#include<stdio.h>
main()
{
	int a;
	printf("enter the no\n");
	scanf("%d",&a);
	if(a%2==0 && a%3==0)
	printf("no is divisible by 2 and 3");
	else if(a%2==0 && a%3!=0)
	printf("no is divisible by 2 but not by 3");
	else if(a%2!=0 && a%3==0)
	printf("no is divisible by 3 but not by 2");
	else
	printf("no is neither divisible by 2 nor by 3");
	return 0;
}
