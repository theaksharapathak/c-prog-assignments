#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,area,side;
	
	printf("enter the three sides of the triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	
	side=(a+b+c)/2;
	area=sqrt(side*(side-a)*(side-b)*(side-c));
	
	printf("area is %f",area);
	
	return 0;
}
