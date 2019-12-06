#include<stdio.h>
main()
{
	int a,b,add,mult,div,modulo,sub;
	printf("enter the two nos\n");
	scanf("%d %d",&a,&b);
	
	add=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	modulo=a%b;
	
	printf("addition = %d\n subtraction = %d\n division = %d\n multiplication = %d\n modulo=%d\n",add,sub,div,mult,modulo);
	
	return 0;
}
