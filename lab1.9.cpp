#include<stdio.h>
#include<math.h>
main()
{
	int p,a,b,c;
	float area;
	printf("enter the sides of the triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("area of the triangle = %.2f",area);
	return 0;
}
