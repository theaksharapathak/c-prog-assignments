#include<stdio.h>
int dectobi(int d);
main()
{
	int d;
	
	printf("enter the no\n");
	scanf("%d",&d);
	
	printf("%d in decimal = %d in binary",d,dectobi(d));
	
	return 0;
}
int dectobi(int d)
{
	int bi=0,i=1;
	while(d!=0)
	{
		bi+=(d%2)*i;
		d/=2;
		i*=10;
	}
	return bi;
}
