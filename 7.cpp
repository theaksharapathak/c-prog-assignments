#include<stdio.h>
main()
{
	float n;
	printf("enter the no\n");
	scanf("%f",&n);
	int a=n;
	float b=n-a;
	
	printf("integral part is %d\nfractional part is %.2f",a,b);
	
	return 0;
}
