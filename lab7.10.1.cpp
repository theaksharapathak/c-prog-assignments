//constant pointer
#include<stdio.h>

main()
{
	int num1,num2;
	int * const ptr=&num1;
	
	 *ptr=10;
	
	 //ptr=&num2;
	
	printf(" number1 is %d\n",num1);
	printf(" number1 is %d",* ptr);
	
	return 0;
}

