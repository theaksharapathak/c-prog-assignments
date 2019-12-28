#include<stdio.h>
main()
{
	int a,f;
	printf("enter the temp in celcius scale\n");
	scanf("%d",&a);
	f=(9/5)*a+32;
	
	printf("converted temp is %d",f);
	return 0;
}
