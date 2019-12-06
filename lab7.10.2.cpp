//pointer to constant
#include<stdio.h>
main()
{
	int num=10;
	const int *ptr;
	
	ptr=&num;
	
	

	num=20;
	//*ptr=200;
	
	printf("num=%d\n",num);
	printf("num=%d",*ptr);
	
	return 0;	
}
