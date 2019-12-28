#include<stdio.h>
main()
{
	int inch,feet,yard;
	printf("enter the length in inches\n");
	scanf("%d",&inch);
	
	feet=12*inch;
	yard=36*inch;
	
	printf("yard is %d\n feet is %d",feet,yard);
	
	return 0;
}
