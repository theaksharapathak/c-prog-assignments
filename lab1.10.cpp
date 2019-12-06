#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter the two nos\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a= %d\n b=%d\n",a,b);
	return 0;
}
