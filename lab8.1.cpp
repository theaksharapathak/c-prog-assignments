#include<stdio.h>

#include<math.h>

struct point
{
	int x,y;
};

double distance(struct point a,struct point b)
{
	 double distance ;
	 
	 distance=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	 
	 return distance;  
}
main()
{
	struct point a,b;
	printf("enter the coordinates of a\n");
	scanf("%d %d",&a.x,&a.y);
	
	printf("enter the coordinates of b\n");
	scanf("%d %d",&b.x,&b.y);
	
	printf("distance berween a and b is %lf",distance(a,b));
	
	return 0;
}
