#include<stdio.h>
main()
{
	int a,b,c,max;
	
	printf("enter the three nos\n");
	scanf("%d %d %d",&a,&b,&c);
	
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("maximum integer is %d",max);

	return 0;
}
