#include<stdio.h>
main()
{
	int volume,area,r;
	printf("enter the radius\n");
	scanf("%d",&r);
	
	area=4*3.14*r*r;
	volume=area*r/3;
	
	printf("area is %d\n and volume is %d",area,volume);
	
	return 0;
}
