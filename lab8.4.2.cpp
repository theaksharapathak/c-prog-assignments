#include<stdio.h>
#include<math.h>

void area(float ax,float ay,float bx,float by,float cx,float cy)
{
	float AB,BC,CA,area,side;
	
	AB=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
	BC=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
	CA=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy));
	
	side=(AB+BC+CA)/2;
	area=sqrt(side*(side-AB)*(side-BC)*(side-CA));
	
	printf("area is %f",area);
	
}
main()
{
	float ax,ay,bx,by,cx,cy;
	printf("enter the dimensons of point A\n");
	scanf("%f %f",&ax,&ay);
	
	printf("enter the dimensons of point B\n");
	scanf("%f %f",&bx,&by);
	
	printf("enter the dimensons of point C\n");
	scanf("%f %f",&cx,&cy);
	
	area(ax,ay,bx,by,cx,cy);
	
	return 0;
	
	
}
