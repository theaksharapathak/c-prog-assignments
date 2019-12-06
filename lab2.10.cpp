#include<stdio.h>
main()
{
	int a,b,c,max,min;
	printf("enter the three nos\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("maximum no is %d\n",a);
	else if(b>a && b>c)
	printf("maximum no is %d\n",b);
	else
	printf("maximum no is %d\n",c);
	
	if(a<b && a<c)
	printf("minimum no is %d",a);
	else if(b<a && b<c)
	printf("minimum no is %d",b);
	else
	printf("minimum no is %d",c);
	
	return 0;
}
