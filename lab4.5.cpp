#include<stdio.h>
main()
{
	int i,first_term =0,second_term=1,next;
	
	printf("fibonacci series is :\n");
	printf("%d\n",first_term);
	printf("%d\n",second_term);
	for(i=1;i<=20;i++)
	{
		
		next= first_term+second_term;
		printf("%d\n",next);
		first_term=second_term;
		second_term=next;
	}
	return 0;
}
