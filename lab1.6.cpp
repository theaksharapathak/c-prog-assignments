#include<stdio.h>
main()
{
	int area,vol,r;
	printf("enter the radius\n");
	scanf("%d",&r);
	area=4*3.14*r*r;
	vol=(area*r)/3;
	printf("area = %d",area);
	printf("volume = %d",vol);
	return 0;
}
