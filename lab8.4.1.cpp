#include<stdio.h>
#include<math.h>

void distance(float x1,float y1,float z1,float x2,float y2,float z2)
{
	float d;
	
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
	
	printf("distance is %f",d);
	
	
}
main()
{
	float x1,x2,y1,y2,z1,z2;
	printf("enter the dimensons of point A\n");
	scanf("%f %f %f",&x1,&y1,&z1);
	
	printf("enter the dimensons of point B\n");
	scanf("%f %f %f",&x2,&y2,&z2);
	
	distance(x1,y1,z1,x2,y2,z2);
	
	return 0;
	
	
}
