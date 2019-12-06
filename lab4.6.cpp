#include<stdio.h>
main()
{
	int i,first=1,second=3,next;
	printf("lucas series is:\n");
	printf("%d\n %d\n",first,second);
	
	for(i=1;i<=20;i++)
	{
		next=first+second;
		printf("%d\n",next);
		first=second;
		second=next;
	}
	return 0;
}
