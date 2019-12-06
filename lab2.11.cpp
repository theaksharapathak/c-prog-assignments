#include<stdio.h>
main()
{
	int avg;
	printf("enter the average marks\n");
	scanf("%d",&avg);
	if(avg>35)
	printf("student is passed\n");
	else
	printf("student is failed\n");
	
	if(avg>=85)
	printf("grade is A");
	else if(avg<85 && avg>=60)
	printf("grade is B");
	else if(avg<60 && avg>=50)
	printf("grade is C");
	else
	printf("grade is D");
	return 0;
}
