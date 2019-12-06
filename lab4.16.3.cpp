#include<stdio.h>
int dectohex(int d);
main()
{
	int d;
	printf("enter the no\n");
	scanf("%d",&d);
	
	printf("%d in decimal = %d in hexadecimal",d,dectohex(d));
	return 0;
}
int dectohex(int d)
{
	int i=1,hex=0;
	while(d!=0)
	{
		hex+=(d%16)*i;
		d/=16;
		i*=10;
	}
	return hex;
}
