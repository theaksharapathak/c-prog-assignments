#include<stdio.h>
#include<math.h>
main()
{
	int p,r,t,c;
	printf("enter the values of p,r,t\n");
	scanf("%d %d %d",&p,&r,&t);
	
	c=p*(pow((1+r/100),t));
	printf("compound interest = %d",c);
	return 0;	
}
