#include<stdio.h>
main()
{
	int i,print=0,num;
	printf("enter the no\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		print=0;
		for(i=0;i<=num;i+=2)
		printf("%d",i);
		
		
	}
	else
	{
		print=1;
		for(i=1;i<=num;i+=2)
		printf("%d",i);
		
	}
}
